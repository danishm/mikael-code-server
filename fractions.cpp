#include "Fractions.h"
#include <iostream>


std::ostream& operator<<(std::ostream& os, const Fraction& f) {
    os << f.n << "/" << f.d;
    return os;
} 
 
int main() {
    Fraction f1 = Fraction(1, 4);
    Fraction f2 = Fraction(1, 4, 5);
    Fraction f3 = Fraction(3, 3, 4);
    Fraction f4 = Fraction(1, 1, 8);

    Fraction answer = f1 * f2 * f3 / f4;

    // Fraction f3 = f1 / f2;
    cout << answer.toProperString() << endl;
    //cout << gcd(97, 71 ) << endl;
}