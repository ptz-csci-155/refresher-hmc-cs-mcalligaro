#include <cmath>
#include <iostream>
#include <string>
#include "vector.hpp"

Vector::Vector(double x, double y, double z)
    : x_{x}, y_{y}, z_{z} 
{
}

Vector& Vector::operator-()
{
    x_ *= -1;
    y_ *= -1;
    z_ *= -1;

    return *this;
}

Vector& Vector::operator+=(const Vector& rhs)
{
    x_ += rhs.x_;
    y_ += rhs.y_;
    z_ += rhs.z_;

    return *this;
}

Vector& Vector::operator-=(const Vector& rhs)
{
    Vector rhsCopy(rhs);
    *this += (-rhsCopy);

    return *this;
}

Vector& Vector::operator*=(double scalar)
{
    x_ *= scalar;
    y_ *= scalar;
    z_ *= scalar;

    return *this;
}

Vector Vector::operator+(const Vector& rhs) const
{
    Vector result(*this);
    result += rhs;

    return result;
}


Vector Vector::operator-(const Vector& rhs) const
{
    Vector result(*this);
    result -= rhs;

    return result;
}

Vector Vector::operator*(double scalar) const
{
    Vector result(*this);
    result *= scalar;

    return result;
}

double Vector::norm() const
{
    return sqrt(x_*x_ + y_*y_ + z_*z_);
}

double Vector::dot(const Vector& rhs) const
{
    return x_*rhs.x_ + y_*rhs.y_ + z_*rhs.z_;
}

Vector Vector::cross(const Vector& rhs) const
{
    return Vector(y_*rhs.z_ - z_*rhs.y_, 
        x_*rhs.z_ - z_*rhs.x_, 
        x_*rhs.y_ - y_*rhs.x_);
}

std::ostream& Vector::print(std::ostream& out) const
{
    out << "(" << x_ << "," << y_ << "," << z_ << ")";
    return out;
}

void Vector::normalize()
{
    *this *= 1 / norm();
}

std::ostream& operator<<(std::ostream& out, const Vector& value)
{
    return value.print(out);
}
