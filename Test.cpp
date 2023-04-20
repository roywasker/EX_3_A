#include "doctest.h"
#include <stdexcept>
#include "sources/Fraction.hpp"
#include <math.h>
using namespace ariel;

TEST_CASE("constructor function"){
    Fraction num1;
    Fraction num2(1,2);
    Fraction num3(0.5);
    Fraction num4(M_PI);
    Fraction num5(1,1);
    Fraction num6(3.141);
    CHECK_EQ(num1,num5);
    CHECK_EQ(num2,num3);
    CHECK_EQ(num4,num6);
}

TEST_CASE("arithmetic function"){
    Fraction num1(5,7);
    Fraction num2(7,5);
    Fraction num3(74,35);
    CHECK_EQ(num3,num1+num2);
    CHECK_EQ(Fraction(1,1),num1*num2);
    CHECK_EQ(Fraction(49,25),num2/num1);
    CHECK_EQ(num1,num3-num2);
}

TEST_CASE("compare function"){
    Fraction num1(5,7);
    Fraction num2(7,5);
    Fraction num3(74,35);
    CHECK_GE(num2,num1);
    CHECK_EQ(Fraction(1,2),Fraction(0.5));
    CHECK_GT(num3,num2);
    CHECK_LE(num1,num2);
    CHECK_LT(Fraction(1,3),Fraction(0.5));
    CHECK_NE(num1,num2);
}

TEST_CASE("compare with float function"){
    Fraction num1(5,7);
    Fraction num2(7,5);
    Fraction num3(74,35);

    CHECK(num2>=0.8);
    CHECK_EQ(0.5,Fraction(0.5));
    CHECK(num3>1.2);
    CHECK_LE(0.1,num2);
    CHECK(num1<1.8);
    CHECK_NE(0.584,num2);
}

TEST_CASE("prefix and postfix function"){
    Fraction num1(5,7);
    Fraction num2(19,5);
    Fraction num3(5,7);
    Fraction num4(19,5);
    Fraction num5(14,5);
    CHECK_EQ(num3,num1++);
    CHECK_EQ(num2,++num5);
    CHECK_EQ(num4,num2--);
    CHECK_EQ(Fraction(5,7),--num1);
}

TEST_CASE("chain operations"){
    Fraction num1(5,7);
    Fraction num2(7,5);
    Fraction num3(4,9);
    Fraction num4(806,315);
    CHECK_EQ(num4,num1+num2+num3);
    Fraction num5(526,315);
    CHECK_EQ(num5,num1+num2-num3);
    CHECK_EQ(num3,num1*num2*num3);
    Fraction num6(421,315);
    CHECK_EQ(num6,num1+num2*num3);
    Fraction num7(421,441);
    CHECK_EQ(num7,num1/num2+num3);
}