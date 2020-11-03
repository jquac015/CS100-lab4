#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"

TEST(MultTest, MultEvaluatePositivesWhole) {
    Mult* test = new Mult(3.0,4.0);
    EXPECT_EQ(test->evaluate(), 12.0);
}

TEST(MultTest, MultEvaluateNegativesWhole) {
    Mult* test = new Mult(-2.0,-5.0);
    EXPECT_EQ(test->evaluate(), 10.0);
}

TEST(MultTest, MultEvaluatePosNegWhole) {
    Mult* test = new Mult(-6.0,9.0);
    EXPECT_EQ(test->evaluate(), -54.0);
}

TEST(MultTest, MultEvaluatePositivesDecimal) {
    Mult* test = new Mult(7.3,9.1);
    EXPECT_NEAR(66.43,test->evaluate(), 66.44);
}

TEST(MultTest, MultEvaluateNegativesDecimal) {
    Mult* test = new Mult(-7.3,-9.1);
    EXPECT_NEAR(66.43,test->evaluate(), 66.44);
}

TEST(MultTest, MultEvaluateZeros) {
    Mult* test = new Mult(0.0,0.0);
    EXPECT_EQ(test->evaluate(), 0.0);
}

TEST(MultTest, MultStringifyPositive) {
    Mult* test = new Mult(7.3,9.1);
    EXPECT_EQ(test->stringify(), "7.300000*9.100000");
}

TEST(MultTest, MultStringifyNegative) {
    Mult* test = new Mult(-3.7,1.9);
    EXPECT_EQ(test->stringify(), "-3.700000*1.900000");
}

TEST(MultTest, MultStringifyPosNeg) {
    Mult* test = new Mult(3.7,-1.9);
    EXPECT_EQ(test->stringify(), "3.700000*(-1.900000)");
}


#endif //__MULT_TEST_HPP__

