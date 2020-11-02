#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "opNegDeci.hpp"
#include "opPosDeci.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpTest, OpEvaluateZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpPosDeciTest, OpEvaluateNonPositiveDecimal) {
    OpPosDeci* test = new OpPosDeci(-7.1);
    EXPECT_EQ(test->evaluate(), 5.4);
}

TEST(OpPosDeciTest, OpEvaluatePositiveDecimal) {
    OpPosDeci* test = new OpPosDeci(5.4);
    EXPECT_EQ(test->evaluate(), 5.4);
}

TEST(OpNegDeciTest, OpEvaluateNonNegativeDecimal) {
    OpNegDeci* test = new OpNegDeci(7.5);
    EXPECT_EQ(test->evaluate(), -3.7);
}

TEST(OpNegDeciTest, OpEvaluateNegativeDecimal) {
    OpNegDeci* test = new OpNegDeci(-3.7);
    EXPECT_EQ(test->evaluate(), -3.7);
}


#endif //__OP_TEST_HPP__
