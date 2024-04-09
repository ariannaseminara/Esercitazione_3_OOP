#include "src/ComplexNumber.hpp"
#include <iostream>

using namespace ComplexLibrary;

int main()
{
    int val1, val2, val3, val4;

    std::cout << "inserisci parte reale del primo numero: " << std::endl;
    std::cin >> val1;
    std::cout << "inserisci parte immaginaria del primo numero: " << std::endl;
    std::cin >> val2;
    ComplexNumber a(val1, val2);

    std::cout << "inserisci parte reale del secondo numero: " << std::endl;
    std::cin >> val3;
    std::cout << "inserisci parte immaginaria del secondo numero: " << std::endl;
    std::cin >> val4;
    ComplexNumber b(val3, val4);

    std::cout << "Complex Number a: " << a << std::endl;
    std::cout << "Complex Number b: " << b << std::endl;

    ComplexNumber sum = a + b;
    std::cout << "Sum: " << sum << std::endl;

    if((a == b) == 1)
        std::cout << "a and b are equal" << std::endl;
    else
        std::cout << "a and b are not equal" << std::endl;

    std::cout << "Conjugate of a: " << a.conjugate() << std::endl;
    std::cout << "Conjugate of b: " << b.conjugate() << std::endl;
    return 0;
}


