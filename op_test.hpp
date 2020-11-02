#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"

#include "opPos.hpp"
#include "opNeg.hpp"
#include "opNegDeci.hpp"
#include "opPosDeci.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 0);
}


TEST(OpPosTest, OpEvaluatePositive) {
    OpPos* test = new OpPos(1);
    EXPECT_EQ(test->evaluate(), 1);
}

TEST(OpNegTest, OpEvaluatePositive) {
    OpNeg* test = new OpNeg(-1);
    EXPECT_EQ(test->evaluate(), -1);
}

TEST(OpPosDeciTest, OpEvaluatePositiveDecimal) {
    OpPosDeci* test = new OpPosDeci(5.4);
    EXPECT_EQ(test->evaluate(), 5.4);
}

TEST(OpNegDeciTest, OpEvaluateNegativeDecimal) {
    OpNegDeci* test = new OpNegDeci(-3.7);
    EXPECT_EQ(test->evaluate(), -3.7);
}

#endif //__OP_TEST_HPP__
