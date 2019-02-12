#ifndef VECTOR_HPP_INCLUDED
#define VECTOR_HPP_INCLUDED 1

#include <iosfwd>

class Vector {
public:
    Vector()                            = default;
    Vector(const Vector&)               = default;
    ~Vector()                           = default;
    Vector& operator=(const Vector&)    = default;

    // Parameterized constructor
    Vector(double x, double y, double z);

    // Self operators
    Vector& operator-();
    Vector& operator+=(const Vector& rhs);
    Vector& operator-=(const Vector& rhs);
    Vector& operator*=(double scalar);

    // Binary operators
    Vector operator+(const Vector& rhs) const;
    Vector operator-(const Vector& rhs) const;    
    Vector operator*(double scalar) const;

    // Constant functions
    double norm() const;
    double dot(const Vector& rhs) const;
    Vector cross(const Vector& rhs) const;
    std::ostream& print(std::ostream& out) const;
    
    // Non-constant functions
    void normalize();

private:
    double x_;
    double y_;
    double z_;
};

std::ostream& operator<<(std::ostream& out, const Vector& value);

#endif
