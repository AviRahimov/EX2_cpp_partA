#include "doctest.h"
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
    Fraction f1(4, 5);
    Fraction f2(2, 3);
    Fraction f3(3, 7);
    Fraction f4(0, 1);
    CHECK((f3 >= 0));
    CHECK(f2 * f3 > 0.285);
}

TEST_CASE("Testing I/O operators"){

}

TEST_CASE("Randomize numbers to check Fraction functions"){

}

//TEST_CASE("Division by zero"){
//
//}

TEST_CASE("Checking if the = operator creates a new object"){

}
