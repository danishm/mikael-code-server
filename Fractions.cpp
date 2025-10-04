#include "Fractions.h"
#include <iostream>
#include <format>

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    else{
        return gcd(b, a % b);
    }
}

Fraction::Fraction(int numerator, int denominator) {
    n = numerator;
    d = denominator;

}

Fraction::Fraction(int whole, int numerator, int denominator) {
    n = (whole * denominator) + numerator;
    d = denominator;
}

Fraction Fraction::operator+(const Fraction& other) {
    int new_n = (n*other.d + other.n*d);
    int new_d = d*other.d;
    return Fraction(new_n, new_d).simplify();
}

Fraction Fraction::operator*(const Fraction& nther) {
    int nnew_n = (n*nther.n);
    int nnew_d = (d*nther.d);
    return Fraction(nnew_n, nnew_d).simplify();
}

Fraction Fraction::operator-(const Fraction& wther) {
    int nnnew_n = (n*wther.d - wther.n*d);
    int nnnew_d = (d*wther.d);
    return Fraction(nnnew_n, nnnew_d).simplify();
}

Fraction Fraction::operator/(const Fraction& other) {
    Fraction reciprocal = Fraction(other.d, other.n);
    Fraction ans = *this * reciprocal;
    return ans.simplify();
}

Fraction Fraction::simplify() {
    int x = gcd(n, d);
    return Fraction(n/x, d/x);
}

string Fraction::toString() {
    return format("{}/{}", n, d);
}

string Fraction::toProperString() {
    int whole = n / d;
    int newn = n % d;

    return format("{} {}/{}", whole, newn, d);
}
