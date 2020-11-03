#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
#include "sub.hpp"

TEST(SubTest, TestPosInt) {
    Sub* test = new Sub(3,2);
    EXPECT_EQ(test->evaluate(), 1);
}

TEST(SubTest, TestPosIntPosDec) {
    Sub* test = new Sub(3,2.1);
    EXPECT_NEAR(0.9, test->evaluate(), 0.001);
}

TEST(SubTest, TestNegDecPosInt) {
    Sub* test = new Sub(-7.2,2);
    EXPECT_EQ(test->evaluate(), -9.2);
}

TEST(SubTest, TestPosIntPosDecString) {
    Sub* test = new Sub(3,2.1);
    EXPECT_EQ(test->stringify(), "3.000000-2.100000");
}
#endif
