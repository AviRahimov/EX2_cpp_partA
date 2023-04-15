#ifndef EX3_CPP_FRACTION_HPP
#define EX3_CPP_FRACTION_HPP

#include <iostream>

namespace ariel{
    class Fraction{
        private:
        int mone, mechane;
        public:
        // constructor
        Fraction(int m, int n);
        // copy constructor
        Fraction(Fraction& other);
        // destructor
        ~Fraction();
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
        Fraction& operator=(const Fraction& other);
        // friend global binary operators
        friend bool operator== (const Fraction& f1, const Fraction& f2);
        friend Fraction operator+ (float f1, const Fraction& f2);
        friend Fraction operator- (float f1, const Fraction& f2);
        friend Fraction operator* (float f1, const Fraction& f2);
        friend Fraction operator/ (float f1, const Fraction& f2);
        friend Fraction operator+ (const Fraction& f2, float f1);
        friend Fraction operator- (const Fraction& f2, float f1);
        friend Fraction operator* (const Fraction& f2, float f1);
        friend Fraction operator/ (const Fraction& f2, float f1);
        friend bool operator> (float f1, const Fraction& f2);
        friend bool operator< (float f1, const Fraction& f2);
        friend bool operator>= (float f1, const Fraction& f2);
        friend bool operator<= (float f1, const Fraction& f2);
        friend bool operator> (const Fraction& f2, float f1);
        friend bool operator< (const Fraction& f2, float f1);
        friend bool operator>= (const Fraction& f2, float f1);
        friend bool operator<= (const Fraction& f2, float f1);
        // friend global IO operators
        friend std::ostream& operator<< (std::ostream& output, const Fraction& f);
        friend std::istream& operator>> (std::istream& input, const Fraction& f);
    }; // end of Fraction class
}

#endif // end of Fraction hpp