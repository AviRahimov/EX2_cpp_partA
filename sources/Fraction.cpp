#include "Fraction.hpp"
#include <algorithm>
#include <cmath>
using namespace ariel;
using namespace std;
#define MAX_NUM 1000000

Fraction::Fraction(int numerator, int denominator) : mone(numerator), mechane(denominator){
    if(denominator == 0){
        throw invalid_argument("Fraction can't be divided by zero");
    }
}

Fraction::Fraction(float num){
     // Convert the float to a fraction
    int sign = (num < 0) ? -1 : 1;
    int whole = floor(num);
    num -= whole;
    int val = round(num * MAX_NUM);
    int den = MAX_NUM;

    // Add the whole part if there is one
    if (whole != 0) {
        val += whole * den;
    }

    // Set the numerator and denominator
    this->mone = sign * val;
    this->mechane = den;
}

// binary operators
Fraction Fraction::operator+ (Fraction& other) const{
    int new_mone = (mone * other.mechane) + (other.mone * mechane);
    int new_mechane = mechane * other.mechane;
    int gcd = __gcd(new_mone, new_mechane); 
    return Fraction(new_mone/gcd, new_mechane/gcd);
}

Fraction Fraction::operator- (Fraction& other) const{
    int new_mone = (mone * other.mechane) - (other.mone * mechane);
    int new_mechane = mechane * other.mechane;
    int gcd = __gcd(new_mone, new_mechane); 
    return Fraction(new_mone/gcd, new_mechane/gcd);
}

Fraction Fraction::operator* (Fraction& other) const{
    int new_mone = mone * other.mone;
    int new_mechane = mechane * other.mechane;
    int gcd = __gcd(new_mone, new_mechane); 
    return Fraction(new_mone/gcd, new_mechane/gcd);
}

Fraction Fraction::operator/ (Fraction& other) const{
    int new_mone = mone * other.mechane;
    int new_mechane = mechane * other.mone;
    int gcd = __gcd(new_mone, new_mechane); 
    return Fraction(new_mone/gcd, new_mechane/gcd);
}

// comparison operators
bool Fraction::operator> (Fraction& other) const{
    return ((mone * other.mechane) > (other.mone * mechane));
}

bool Fraction::operator< (Fraction& other) const{
    return ((mone * other.mechane) < (other.mone * mechane));
}

bool Fraction::operator>= (Fraction& other) const{
    return ((mone * other.mechane) >= (other.mone * mechane));
}

bool Fraction::operator<= (Fraction& other) const{
    return ((mone * other.mechane) <= (other.mone * mechane));
}

// increment and decrement operators
Fraction& Fraction::operator++(){
    mone = mone + mechane;
    return *this;
}

const Fraction Fraction::operator++(int dummy_flag_for_postfix_increment){
    Fraction temp(*this);
    mone = mone + mechane;
    return temp;
}

Fraction& Fraction::operator--(){
    mone = mone - mechane;
    return *this;
}

const Fraction Fraction::operator--(int dummy_flag_for_postfix_decrement){
    Fraction temp(*this);
    mone = mone - mechane;
    return temp;
}

// friend global comparison operators
bool ariel::operator> (float f1, const Fraction& f2){
    float curr_value = FractionToFloat(f2);
    return f1 > curr_value;
}

bool ariel::operator< (float f1, const Fraction& f2){
    float curr_value = FractionToFloat(f2);
    return f1 < curr_value;
}

bool ariel::operator>= (float f1, const Fraction& f2){
    float curr_value = FractionToFloat(f2);
    return f1 >= curr_value;
}

bool ariel::operator<= (float f1, const Fraction& f2){
    float curr_value = FractionToFloat(f2);
    return f1 <= curr_value;
}

bool ariel::operator> (const Fraction& f2, float f1){
    float curr_value = FractionToFloat(f2);
    return curr_value > f1;
}

bool ariel::operator< (const Fraction& f2, float f1){
    float curr_value = FractionToFloat(f2);
    return curr_value < f1;
}

bool ariel::operator>= (const Fraction& f2, float f1){
    float curr_value = FractionToFloat(f2);
    return curr_value >= f1;
}

bool ariel::operator<= (const Fraction& f2, float f1){
    float curr_value = FractionToFloat(f2);
    return curr_value <= f1;
}

// friend global binary operators
bool ariel::operator== (const Fraction& f1, const Fraction& f2){
    int f1_gcd = __gcd(f1.getMechane(), f1.getMone());
    int f2_gcd = __gcd(f2.getMechane(), f2.getMone());
    int reduced_mone_f1 = f1.getMone()/f1_gcd;
    int reduced_mechane_f1 = f1.getMechane()/f1_gcd;
    int reduced_mone_f2 = f2.getMone()/f2_gcd;
    int reduced_mechane_f2 = f2.getMechane()/f2_gcd;
    return (reduced_mone_f1 == reduced_mone_f2 && reduced_mechane_f1 == reduced_mechane_f2);
}

Fraction ariel::operator+ (float f1, const Fraction& f2){
    float result =  f1 + FractionToFloat(f2);
    return Fraction(result);
}

Fraction ariel::operator- (float f1, const Fraction& f2){
    float result = f1 - FractionToFloat(f2);
    return Fraction(result);
}

Fraction ariel::operator* (float f1, const Fraction& f2){
    float result = f1 * FractionToFloat(f2);
    return Fraction(result);
}

Fraction ariel::operator/ (float f1, const Fraction& f2){
    float result = f1/FractionToFloat(f2);
    return Fraction(result);
}

Fraction ariel::operator+ (const Fraction& f2, float f1){
    float result = FractionToFloat(f2) + f1;
    return Fraction(result);
}

Fraction ariel::operator- (const Fraction& f2, float f1){
    float result = FractionToFloat(f2) - f1;
    return Fraction(result);
}

Fraction ariel::operator* (const Fraction& f2, float f1){
    float result = FractionToFloat(f2) * f1;
    return Fraction(result);
}

Fraction ariel::operator/ (const Fraction& f2, float f1){
    float result = FractionToFloat(f2)/f1;
    return Fraction(result);
}

// friend global IO operators
std::ostream& ariel::operator<< (std::ostream& output, const Fraction& f){
    // Output the fraction to the output stream in the format "numerator/denominator"
    output << f.getMone() << "/" << f.getMechane();
    return output;
}

std::istream& ariel::operator>> (std::istream& input, const Fraction& f){
    // Read the fraction from the input stream in the format "numerator/denominator"
    return input;
}

int Fraction::getMone() const{
    return this->mone;
}

int Fraction::getMechane() const{
    return this->mechane;
}

float ariel::FractionToFloat(const Fraction& a){
    float numerator_a = (float)a.getMone();
    float denominator_a = (float)a.getMechane();
    float fraction_float = numerator_a/denominator_a;
    return round(fraction_float*1000)/1000;
}