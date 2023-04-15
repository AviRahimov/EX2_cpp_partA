#include "Fraction.hpp"
using namespace ariel;

Fraction::Fraction(int m, int n) : mone(m), mechane(n){

}

Fraction::Fraction(Fraction& other){

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

Fraction& Fraction::operator=(const Fraction& other){
    return *this;
}

Fraction operator+ (float f1, const Fraction& f2){
    return Fraction(0, 0);
}

Fraction operator- (float f1, const Fraction& f2){
    return Fraction(0, 0);
}

Fraction operator* (float f1, const Fraction& f2){
    return Fraction(0, 0);
}

Fraction operator/ (float f1, const Fraction& f2){
    return Fraction(0, 0);
}

Fraction operator+ (const Fraction& f2, float f1){
    return Fraction(0, 0);
}

Fraction operator- (const Fraction& f2, float f1){
    return Fraction(0, 0);
}

Fraction operator* (const Fraction& f2, float f1){
    return Fraction(0, 0);
}

Fraction operator/ (const Fraction& f2, float f1){
    return Fraction(0, 0);
}

bool operator> (float f1, const Fraction& f2){
    return true;
}

bool operator< (float f1, const Fraction& f2){
    return true;
}

bool operator>= (float f1, const Fraction& f2){
    return true;
}

bool operator<= (float f1, const Fraction& f2){
    return true;
}

bool operator> (const Fraction& f2, float f1){
    return true;
}

bool operator< (const Fraction& f2, float f1){
    return true;
}

bool operator>= (const Fraction& f2, float f1){
    return true;
}

bool operator<= (const Fraction& f2, float f1){
    return true;
}

// friend global binary operators
bool operator== (const Fraction& f1, const Fraction& f2){
    return true;
}

// friend global IO operators
std::ostream& operator<< (std::ostream& output, const Fraction& f){
    return output;
}

std::istream& operator>> (std::istream& input, const Fraction& f){
    return input;
}