#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"

TEST(RandTest, RandEvaluate) {
    Rand* test = new Rand();
    EXPECT_NEAR(1, test->evaluate(), 100);
}

#endif //__RAND_TEST_HPP__
