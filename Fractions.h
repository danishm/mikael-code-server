#ifndef FRACTIONS_H
#define FRACTIONS_H

#include <string>

using namespace std;

class Fraction {
public:
    int n;
    int d;

    Fraction(int numerator, int denominator);
    Fraction(int whole, int numerator, int denominator);
    Fraction operator+(const Fraction& other);
    Fraction operator*(const Fraction& nther);
    Fraction operator-(const Fraction& wther);
    Fraction operator/(const Fraction& other);
    Fraction simplify();
    string toString();
    string toProperString();
};

#endif