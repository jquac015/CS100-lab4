#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "opPos.hpp"
#include "opNeg.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpPosTest, OpEvaluatePositive) {
    OpPos* test = new OpPos(1);
    EXPECT_EQ(test->evaluate(), 1);
}

TEST(OpNegTest, OpEvaluatePositive) {
    OpNeg* test = new OpNeg(-1);
    EXPECT_EQ(test->evaluate(), -1);
}

#endif //__OP_TEST_HPP__
