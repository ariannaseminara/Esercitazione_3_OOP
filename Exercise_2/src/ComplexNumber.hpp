#ifndef __COMPLEXNUMBER_H
#define __COMPLEXNUMBER_H

#include <iostream>

using namespace std;

namespace ComplexLibrary {

struct ComplexNumber
{
    double real;
    double imag;
    //costruttore
    ComplexNumber(double realPart, double imagPart): real(realPart), imag(imagPart) {} //serve per definire l'oggetto ComplexNumber

    ComplexNumber() = default;

    ComplexNumber conjugate()
    {
        return ComplexNumber(real, -imag);
    }
};

ostream& operator<<(ostream& os, const ComplexNumber &a);

ComplexNumber operator+(const ComplexNumber &a1, const ComplexNumber &a2);

int operator==(const ComplexNumber &a1, const ComplexNumber &a2);
}

#endif
