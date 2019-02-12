#include <iostream>
#include "vector.hpp"

// Ad hoc testing of some vector functions
int main()
{
    Vector a(1,2,3);
    Vector b(-2,8,-5);

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    std::cout << "a + b: " << (a + b) << std::endl;
    std::cout << "a - b: " << (a - b) << std::endl;
    std::cout << "a * 2: " << (a * 2) << std::endl;
    std::cout << "a * b: " << a.dot(b) << std::endl;
    std::cout << "a X b: " << a.cross(b) << std::endl;
    std::cout << "norm a: " << a.norm() << std::endl;

    return 0;
}
