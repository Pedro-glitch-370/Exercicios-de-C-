#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
using namespace std;

class Fraction {
    private:
        long numerator, denominator;
    public:
        Fraction(long i_numerator = 0, long i_denominator = 1);
        Fraction operator- () const;
        Fraction operator++ ();
        Fraction operator-- ();
        Fraction operator+= (const Fraction& other);
        Fraction operator-= (const Fraction& other);
        Fraction operator*= (const Fraction& other);
        Fraction operator/= (const Fraction& other);
        friend Fraction operator+ (const Fraction& first, const Fraction& second);
        friend Fraction operator- (const Fraction& first, const Fraction& second);
        friend Fraction operator* (const Fraction& first, const Fraction& second);
        friend Fraction operator/ (const Fraction& first, const Fraction& second);
        friend ostream& operator<< (ostream& out, const Fraction& fraction);
        friend istream& operator>> (istream& in, Fraction& fraction);
};

#endif