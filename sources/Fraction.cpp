#include "Fraction.hpp"
using namespace ariel;

Fraction::Fraction(int m, int n) : mone(m), mechane(n){

}

Fraction::Fraction(Fraction& other){

}

// binary operators
Fraction Fraction::operator+ (Fraction& other) const{

}

Fraction Fraction::operator- (Fraction& other) const{

}

Fraction Fraction::operator* (Fraction& other) const{

}

Fraction Fraction::operator/ (Fraction& other) const{

}

bool Fraction::operator> (Fraction& other) const{

}

bool Fraction::operator< (Fraction& other) const{

}

bool Fraction::operator>= (Fraction& other) const{

}

bool Fraction::operator<= (Fraction& other) const{

}

Fraction& Fraction::operator++(){

}

Fraction Fraction::operator++(int dummy_flag_for_postfix_increment){

}

Fraction& Fraction::operator--(){

}

Fraction Fraction::operator--(int dummy_flag_for_postfix_decrement){

}

Fraction& Fraction::operator=(const Fraction& other){

}

// friend global binary operators
bool operator== (const Fraction& f1, const Fraction& f2){

}

// friend global IO operators
std::ostream& operator<< (std::ostream& output, const Fraction& f){

}

std::istream& operator>> (std::istream& input, const Fraction& f){

}