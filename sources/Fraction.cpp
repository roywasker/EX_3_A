#include "Fraction.hpp"
#include <stdexcept>

using namespace ariel;

Fraction::Fraction() {}
Fraction::Fraction(float num) {}
Fraction::Fraction(int numerator, int denominator):numerator_(numerator) , denominator_(denominator) {}

Fraction Fraction::operator+(const Fraction &other) const {return Fraction(0,0);}
Fraction Fraction::operator+(float other) const {return Fraction(0,0);}
Fraction Fraction::operator-(const Fraction &other) const {return Fraction(0,0);}
Fraction Fraction::operator-(float other) const {return Fraction(0,0);}
Fraction Fraction::operator*(const Fraction &other) const {return Fraction(0,0);}
Fraction Fraction::operator*(float other) const {return Fraction(0,0);}
Fraction Fraction::operator/(const Fraction &other) const {return Fraction(0,0);}
Fraction Fraction::operator/(float other) const {return Fraction(0,0);}

Fraction ariel::operator+(float float1,const Fraction& other){return Fraction(0,0);}
Fraction ariel::operator-(float float1,const Fraction& other){return Fraction(0,0);}
Fraction ariel::operator*(float float1,const Fraction& other){return Fraction(0,0);}
Fraction ariel::operator/(float float1,const Fraction& other){return Fraction(0,0);}

bool Fraction::operator==(const Fraction &other)const {return false;}
bool Fraction::operator==(float other) {return false;}
bool Fraction::operator!=(const Fraction &other)const {return false;}
bool Fraction::operator!=(float other) {return false;}
bool Fraction::operator>(const Fraction &other)const {return false;}
bool Fraction::operator>(float other) {return false;}
bool Fraction::operator<(const Fraction &other)const {return false;}
bool Fraction::operator<(float other) {return false;}
bool Fraction::operator>=(const Fraction &other)const {return false;}
bool Fraction::operator>=(float other) {return false;}
bool Fraction::operator<=(const Fraction &other)const {return false;}
bool Fraction::operator<=(float other) {return false;}

bool ariel::operator==(float lnum,const Fraction& rnum){return false;}
bool ariel::operator!=(float lnum,const Fraction& rnum){return false;}
bool ariel::operator>(float lnum,const Fraction& rnum){return false;}
bool ariel::operator<(float lnum,const Fraction& rnum){return false;}
bool ariel::operator>=(float lnum,const Fraction& rnum){return false;}
bool ariel::operator<=(float lnum,const Fraction& rnum){return false;}

Fraction& Fraction::operator++() {return *this;}
Fraction& Fraction::operator--() {return *this;}
const Fraction Fraction::operator++(int) {return *this;}
const Fraction Fraction::operator--(int) {return *this;}

std::ostream& ariel::operator<<(ostream& output, const Fraction& frac){return output;}

std::istream& ariel::operator>> (istream& input, Fraction& frac){return input;}

int Fraction::getnumerator() {return numerator_;};
int Fraction::getdenominator() {return denominator_;};