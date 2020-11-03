#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "add.hpp"

TEST(AddTest, AddEvaluatePositivesWhole) {
    Add* test = new Add(3.0,4.0);
    EXPECT_EQ(test->evaluate(), 7.0);
}

TEST(AddTest, AddEvaluateNegativesWhole) {
    Add* test = new Add(-2.0,-5.0);
    EXPECT_EQ(test->evaluate(), -7.0);
}

TEST(AddTest, AddEvaluatePosNegWhole) {
    Add* test = new Add(-6.0,9.0);
    EXPECT_EQ(test->evaluate(), 3.0);
}

TEST(AddTest, AddEvaluatePositivesDecimal) {
    Add* test = new Add(7.3,9.1);
    EXPECT_EQ(test->evaluate(), 16.4);
}

TEST(AddTest, AddEvaluateNegativesDecimal) {
    Add* test = new Add(-7.3,-9.1);
    EXPECT_EQ(test->evaluate(), -16.4);
}

TEST(AddTest, AddEvaluateZeros) {
    Add* test = new Add(0.0,0.0);
    EXPECT_EQ(test->evaluate(), 0.0);
}

TEST(AddTest, AddStringifyPositive) {
    Add* test = new Add(7.3,9.1);
    EXPECT_EQ(test->stringify(), "7.300000+9.100000");
}

TEST(AddTest, AddStringifyNegative) {
    Add* test = new Add(-3.7,1.9);
    EXPECT_EQ(test->stringify(), "-3.700000+1.900000");
}

TEST(AddTest, AddStringifyPosNeg) {
    Add* test = new Add(3.7,-1.9);
    EXPECT_EQ(test->stringify(), "3.700000+(-1.900000)");
}

#endif //__MULT_TEST_HPP__
