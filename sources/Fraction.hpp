#ifndef EX3_CPP_FRACTION_HPP
#define EX3_CPP_FRACTION_HPP

#include <iostream>

namespace ariel{
    class Fraction{
        private:
        int mone, mechane;
        public:
        // constructor
        Fraction(int m, int n) : mone(m), mechane(n){};
        // copy constructor
        Fraction(Fraction& other);

        // binary operators
        Fraction operator+ (Fraction& other) const;
        Fraction operator- (Fraction& other) const;
        //friend Fraction& operator- (const Fraction& f1, const Fraction& f2);
        //friend Fraction& operator* (const Fraction& f1, const Fraction& f2);
        //friend Fraction& operator+ (const Fraction& f1, const Fraction& f2);
        Fraction operator* (Fraction& other) const;
        Fraction operator/ (Fraction& other) const;
        bool operator> (Fraction& other) const;
        bool operator< (Fraction& other) const;
        bool operator>= (Fraction& other) const;
        bool operator<= (Fraction& other) const;
        Fraction& operator++();
        Fraction operator++(int dummy_flag_for_postfix_increment);
        Fraction& operator--();
        Fraction operator--(int dummy_flag_for_postfix_decrement);
        Fraction& operator=(const Fraction& other);
        // friend global binary operators
        friend bool operator== (const Fraction& f1, const Fraction& f2);

        // friend global IO operators
        friend std::ostream& operator<< (std::ostream& output, const Fraction& f);
        friend std::istream& operator>> (std::istream& input, const Fraction& f);
    }; // end of Fraction class
}

#endif // end of Fraction hpp