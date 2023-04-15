#include "Fraction.hpp"
using namespace ariel;

Fraction::Fraction(int m, int n) : mone(m), mechane(n){

}

Fraction::Fraction(const Fraction& other){

}
Fraction::~Fraction(){

}

// binary operators
Fraction Fraction::operator+ (Fraction& other) const{
    return Fraction(0, 0);
}

Fraction Fraction::operator- (Fraction& other) const{
    return Fraction(0, 0);
}

Fraction Fraction::operator* (Fraction& other) const{
    return Fraction(0, 0);
}

Fraction Fraction::operator/ (Fraction& other) const{
    return Fraction(0, 0);
}

// comparison operators
bool Fraction::operator> (Fraction& other) const{
    return true;
}

bool Fraction::operator< (Fraction& other) const{
    return true;
}

bool Fraction::operator>= (Fraction& other) const{
    return true;
}

bool Fraction::operator<= (Fraction& other) const{
    return true;
}

Fraction& Fraction::operator=(const Fraction& other){
    return *this;
}

// increment and decrement operators
Fraction& Fraction::operator++(){
    return *this;
}

const Fraction Fraction::operator++(int dummy_flag_for_postfix_increment){
    return Fraction(0, 0);
}

Fraction& Fraction::operator--(){
    return *this;
}

const Fraction Fraction::operator--(int dummy_flag_for_postfix_decrement){
    return Fraction(0, 0);
}

// friend global comparison operators
bool ariel::operator> (float f1, const Fraction& f2){
    return true;
}

bool ariel::operator< (float f1, const Fraction& f2){
    return true;
}

bool ariel::operator>= (float f1, const Fraction& f2){
    return true;
}

bool ariel::operator<= (float f1, const Fraction& f2){
    return true;
}

bool ariel::operator> (const Fraction& f2, float f1){
    return true;
}

bool ariel::operator< (const Fraction& f2, float f1){
    return true;
}

bool ariel::operator>= (const Fraction& f2, float f1){
    return true;
}

bool ariel::operator<= (const Fraction& f2, float f1){
    return true;
}

// friend global binary operators
bool ariel::operator== (const Fraction& f1, const Fraction& f2){
    return true;
}

Fraction ariel::operator+ (float f1, const Fraction& f2){
    return Fraction(0, 0);
}

Fraction ariel::operator- (float f1, const Fraction& f2){
    return Fraction(0, 0);
}

Fraction ariel::operator* (float f1, const Fraction& f2){
    return Fraction(0, 0);
}

Fraction ariel::operator/ (float f1, const Fraction& f2){
    return Fraction(0, 0);
}

Fraction ariel::operator+ (const Fraction& f2, float f1){
    return Fraction(0, 0);
}

Fraction ariel::operator- (const Fraction& f2, float f1){
    return Fraction(0, 0);
}

Fraction ariel::operator* (const Fraction& f2, float f1){
    return Fraction(0, 0);
}

Fraction ariel::operator/ (const Fraction& f2, float f1){
    return Fraction(0, 0);
}

// friend global IO operators
std::ostream& ariel::operator<< (std::ostream& output, const Fraction& f){
    return output;
}

std::istream& ariel::operator>> (std::istream& input, const Fraction& f){
    return input;
}
