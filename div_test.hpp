#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "div.hpp"

TEST(DivTest, DivEvaluatePositivesWhole) {
    Div* test = new Div(3.0,4.0);
    EXPECT_EQ(test->evaluate(), 0.75);
}

TEST(DivTest, DivEvaluateNegativesWhole) {
    Div* test = new Div(-2.0,-5.0);
    EXPECT_EQ(test->evaluate(), 0.4);
}

TEST(DivTest, DivEvaluatePosNegWhole) {
    Div* test = new Div(-6.0,8.0);
    EXPECT_EQ(test->evaluate(), -0.75);
}

TEST(DivTest, DivEvaluatePositivesDecimal) {
    Div* test = new Div(7.3,9.1);
    EXPECT_NEAR(0.802,test->evaluate(), 0.803);
}

TEST(DivTest, DivEvaluateNegativesDecimal) {
    Div* test = new Div(-7.3,-9.1);
    EXPECT_NEAR(0.802,test->evaluate(), 0.803);
}

TEST(DivTest, DivEvaluateZero) {
    Div* test = new Div(0.0,0);
    EXPECT_ANY_THROW(test->evaluate());
}

TEST(DivTest, DivStringifyPositive) {
    Div* test = new Div(7.3,9.1);
    EXPECT_EQ(test->stringify(), "7.300000/9.100000");
}

TEST(DivTest, DivStringifyNegative) {
    Div* test = new Div(-3.7,1.9);
    EXPECT_EQ(test->stringify(), "-3.700000/1.900000");
}

TEST(DivTest, DivStringifyPosNeg) {
    Div* test = new Div(3.7,-1.9);
    EXPECT_EQ(test->stringify(), "3.700000/(-1.900000)");
}

#endif //__MULT_TEST_HPP__
