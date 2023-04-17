#include "doctest.h"
#include <sstream>
#include <algorithm>
#include "sources/Fraction.hpp"
using namespace ariel;

TEST_CASE("Checking uncorrected values for Fraction"){
    CHECK_NOTHROW(Fraction(0, 1));
    CHECK_THROWS(Fraction(0, 0));
    CHECK_THROWS(Fraction(1, 0));
}

TEST_CASE("Testing the + (addition) operator"){
    Fraction f1(3, 6);
    Fraction f2(1, 6);
    CHECK(f1+f2 == Fraction(2, 3));
    CHECK(((f2+0.5 == 0.5+f2) && (f2+0.5 == Fraction(2, 3))));
}

TEST_CASE("Testing the - (subtraction) operator"){
    Fraction f1(3, 6);
    Fraction f2(1, 6);
    Fraction f3(1, 2);
    CHECK(f1-f2 == Fraction(1, 3));
    CHECK(f2-f1 == Fraction(-2, 6));
    CHECK(((f1-0.5 == f3-0.5) && (f1-0.5 == Fraction(0, 1))));
    CHECK(((f1-f3 == f3-f1) && (f1-f3 == Fraction(0, 1))));
}

TEST_CASE("Testing the * (multiplication) operator"){
    Fraction f1(1, 3);
    Fraction f2(2, 6);
    CHECK(f1*f2 == Fraction(1, 9));
}

TEST_CASE("Testing the / (division) operator"){
    Fraction f1(1, 3);
    Fraction f2(2, 6);
    Fraction f3(0, 1);
    CHECK(((f1/f2 == f2/f1) && (f1/f2 == Fraction(1, 1))));
    CHECK_THROWS(f2/f1);
}

TEST_CASE("Testing comparison operators (>, <, >=, <=, ==)"){
    Fraction f1(-4, 5);
    Fraction f2(2, 3);
    Fraction f3(3, 7);
    Fraction f4(0, 1);
    CHECK((f3 >= 0));
    CHECK(f2 * f3 >= 0.285);
    CHECK((f1 < f4));
}

TEST_CASE("Testing I/O operators"){
    // Create a Fraction object
    Fraction f1(2, 3);
    Fraction f2(0, 1);
    // Create an output stringstream
    std::ostringstream output1;
    std::ostringstream output2;
    // Write the Fraction object to the stringstream using operator<<
    output1 << f1;
    output2 << f2;
    // Check that the output is as expected
    CHECK(output1.str() == "2/3");
    CHECK(output2.str() == "0");
}

TEST_CASE("Randomize numbers to check Fraction functions"){
    // Seed the random number generator
    srand(time(0));

    // Generate 100 random fractions and perform various operations on them
    for (int i = 0; i < 100; i++) {
        int den, num;
        do {
            num = rand() % 100 - 50; // Random value in the range [-50, 49]
            den = rand() % 99 + 1;   // Random value in the range [1, 99]
        } while (num == den); // Generate new values if num == den

        // Create Fraction objects from the random values
        Fraction f1(num, den);
        Fraction f2(den, num);

        // Calculate the gcd of the numerator and the denominator
        int gcd = std::__gcd(num, den);
        // Test arithmetic operators
        CHECK(f1 + f2 == Fraction((num * num + den * den)/gcd, (den * num)/gcd));
        CHECK(f1 - f2 == Fraction((num * num - den * den)/gcd, (den * num)/gcd));
        CHECK(f1 * f2 == Fraction((num * den)/gcd, (den * num)/gcd));
        CHECK(f1 / f2 == Fraction((num * num)/gcd, (den * den)/gcd));

        // Test comparison operators
        CHECK((f1 == Fraction(num, den)));
        CHECK((f1 < f2 || f1 > f2));
        CHECK((f1 <= f2 || f1 >= f2));
    }
}