#ifndef EX3_CPP_FRACTION_HPP
#define EX3_CPP_FRACTION_HPP

#include <iostream>

namespace ariel{
    class Fraction{
        private:
        int mone, mechane;
        public:
        // constructor
        Fraction(int numerator, int denominator);
    
        // binary operators
        Fraction operator+ (Fraction& other) const;
        Fraction operator- (Fraction& other) const;
        Fraction operator* (Fraction& other) const;
        Fraction operator/ (Fraction& other) const;
        bool operator> (Fraction& other) const;
        bool operator< (Fraction& other) const;
        bool operator>= (Fraction& other) const;
        bool operator<= (Fraction& other) const;
        Fraction& operator++();
        const Fraction operator++(int dummy_flag_for_postfix_increment);
        Fraction& operator--();
        const Fraction operator--(int dummy_flag_for_postfix_decrement);
        friend bool operator== (const Fraction& frac1, const Fraction& frac2);
        friend Fraction operator+ (float frac1, const Fraction& frac2);
        friend Fraction operator- (float frac1, const Fraction& frac2);
        friend Fraction operator* (float frac1, const Fraction& frac2);
        friend Fraction operator/ (float frac1, const Fraction& frac2);
        friend Fraction operator+ (const Fraction& frac2, float frac1);
        friend Fraction operator- (const Fraction& frac2, float frac1);
        friend Fraction operator* (const Fraction& frac2, float frac1);
        friend Fraction operator/ (const Fraction& frac2, float frac1);
        friend bool operator> (float frac1, const Fraction& frac2);
        friend bool operator< (float frac1, const Fraction& frac2);
        friend bool operator>= (float frac1, const Fraction& frac2);
        friend bool operator<= (float frac1, const Fraction& frac2);
        friend bool operator> (const Fraction& frac2, float frac1);
        friend bool operator< (const Fraction& frac2, float frac1);
        friend bool operator>= (const Fraction& frac2, float frac1);
        friend bool operator<= (const Fraction& frac2, float frac1);
        // friend global IO operators
        friend std::ostream& operator<< (std::ostream& output, const Fraction& frac);
        friend std::istream& operator>> (std::istream& input, const Fraction& frac);
    }; // end of Fraction class
}

#endif // end of Fraction hpp