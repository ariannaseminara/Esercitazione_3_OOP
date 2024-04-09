#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;

namespace ComplexLibrary {

ostream& operator << (ostream& os, const ComplexNumber &a)
{
    if(a.real!= 0 && a.imag > 0)
        os << a.real << "+" << a.imag << "i";
    else if(a.real!= 0 && a.imag < 0)
        os << a.real << a.imag << "i";
    else if(a.imag == 0)
        os << a.real;
    else if(a.real == 0)
        os << a.imag << "i";
    else
        os << 0;
    return os;
}

ComplexNumber operator+(const ComplexNumber &a1, const ComplexNumber &a2)
{
    double RealPart = a1.real + a2.real;
    double ImagPart = a1.imag + a2.imag;
    ComplexNumber c(RealPart, ImagPart);
    return c;
}

int operator==(const ComplexNumber &a1, const ComplexNumber &a2)
{
    if(a1.real == a2.real && a1.imag == a2.imag){
        return 1;
    }
    else
    return 0;
}

}

