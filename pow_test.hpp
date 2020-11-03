#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include "pow.hpp"

TEST(PowTest, TestPosPos) {
    Pow* test = new Pow(3,2);
    EXPECT_EQ(test->evaluate(), 9);
}

TEST(PowTest, TestPosEvenNeg) {
    Pow* test = new Pow(3,-2);
    EXPECT_NEAR(test->evaluate(), 1.0/9, 0.01);
}

TEST(PowTest, TestPosOddNeg) {
    Pow* test = new Pow(3,-3);
    EXPECT_NEAR(test->evaluate(), 1.0/27, 0.01);
}

TEST(PowTest, TestNegEvenPos) {
    Pow* test = new Pow(-3,2);
    EXPECT_EQ(test->evaluate(), 9);
}

TEST(PowTest, TestNegOddPos) {
    Pow* test = new Pow(-3,3);
    EXPECT_EQ(test->evaluate(), -27);
}

TEST(PowTest, TestZeroNeg) {
    Pow* test = new Pow(0, -1);
    EXPECT_ANY_THROW(test->evaluate());
}

TEST(PowTest, TestPosEvenNegString) {
    Pow* test = new Pow(3,-2);
    EXPECT_EQ(test->stringify(), "3.000000**(-2.000000)");
}
#endif
