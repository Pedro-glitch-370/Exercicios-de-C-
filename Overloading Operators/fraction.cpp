#include "fraction.h"
#include <iostream>
using namespace std;

Fraction::Fraction(long i_numerator, long i_denominator) : numerator(i_numerator), denominator(i_denominator) {}

Fraction Fraction::operator- () const {
    return Fraction(-numerator, denominator);
}

Fraction Fraction::operator++ () {
    numerator += denominator;
    return *this;
}

Fraction Fraction::operator-- () {
    numerator -= denominator;
    return *this;
}

Fraction Fraction::operator+= (const Fraction& other) {
    numerator = (numerator * other.denominator) + (other.numerator * denominator);
    denominator *= other.denominator;
    return *this;
}

Fraction Fraction::operator-= (const Fraction& other) {
    numerator = (numerator * other.denominator) - (other.numerator * denominator);
    denominator *= other.denominator;
    return *this;
}

Fraction Fraction::operator*= (const Fraction& other) {
    numerator *= other.numerator;
    denominator *= other.denominator;
    return *this;
}

Fraction Fraction::operator/= (const Fraction& other) {
    numerator *= other.denominator;
    denominator *= other.numerator;
    return *this;
}

Fraction operator+ (const Fraction& first, const Fraction& second) {
    Fraction result;
    result.numerator = (first.numerator * second.denominator) + (second.numerator * first.denominator);
    result.denominator = first.denominator * second.denominator;
    return result;
}

Fraction operator- (const Fraction& first, const Fraction& second) {
    Fraction result;
    result.numerator = (first.numerator * second.denominator) - (second.numerator * first.denominator);
    result.denominator = first.denominator * second.denominator;
    return result;
}

Fraction operator* (const Fraction& first, const Fraction& second) {
    Fraction result;
    result.numerator = first.numerator * second.numerator;
    result.denominator = first.denominator * second.denominator;
    return result;
}

Fraction operator/ (const Fraction& first, const Fraction& second) {
    if (second.numerator == 0) {
        cout << "\n Divisao por zero nao e permitida!\n";
        exit(1);
    }

    Fraction result;
    result.numerator = first.numerator * second.denominator;
    result.denominator = first.denominator * second.numerator;

    if (result.denominator < 0) {
        result.denominator *= -1;
        result.denominator *= -1;
    }

    return result;
}

ostream& operator<< (ostream& out, const Fraction& fraction) {
    out << fraction.numerator << "/" << fraction.denominator;
    return out;
}

istream& operator>> (istream& in, Fraction& fraction) {
    cout << "Digite um numero inteiro para o numerador: \n";
    in >> fraction.numerator;
    cout << "Digite um numero diferente de zero para o denominador: \n";
    in >> fraction.denominator;

    if (fraction.denominator == 0) {
        cout << "\n Divisao por zero nao e permitida!\n";
        exit(1);
    }

    if (fraction.denominator < 0) {
        fraction.numerator *= -1;
        fraction.denominator *= -1;
    }

    return in;
}