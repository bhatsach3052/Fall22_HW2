#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(CalculateTest, Calculate_Test_Case_1) {
    int input1 = 3;
    int input2 = 2;
    Operation input3 = Operation::kAdd;
    float actual = Calculate(input1,input2,input3);
    float expected = 5;
    EXPECT_EQ(actual, expected);
}

TEST(CalculateTest, Calculate_Test_Case_2) {
    int input1 = 3;
    int input2 = 2;
    Operation input3 = Operation::kAdd;
    float actual = Calculate(input1,input2,input3);
    float expected = 5;
    EXPECT_EQ(actual, expected);
}
TEST(CalculateTest, Calculate_Test_Case_3) {
    int input1 = 3;
    int input2 = 2;
    Operation input3 = Operation::kSubtract;
    float actual = Calculate(input1,input2,input3);
    float expected = 1;
    EXPECT_EQ(actual, expected);
}
TEST(CalculateTest, Calculate_Test_Case_4) {
    int input1 = 3;
    int input2 = 2;
    Operation input3 = Operation::kMultiplication;
    float actual = Calculate(input1,input2,input3);
    float expected = 6;
    EXPECT_EQ(actual, expected);
}
TEST(CalculateTest, Calculate_Test_Case_5) {
    int input1 = 3;
    int input2 = 2;
    Operation input3 = Operation::kDivision;
    float actual = Calculate(input1,input2,input3);
    float expected = 1.5;
    EXPECT_EQ(actual, expected);
}
TEST(CalculateTest, Calculate_Test_Case_6) {
    int input1 = 3;
    int input2 = 2;
    Operation input3 = Operation::kShift_right;
    float actual = Calculate(input1,input2,input3);
    float expected = 0;
    EXPECT_EQ(actual, expected);
}

TEST(CalculateTest, Calculate_Test_Case_7) {
    int input1 = 3;
    int input2 = 2;
    Operation input3 = Operation::kShift_left;
    float actual = Calculate(input1,input2,input3);
    float expected = 12;
    EXPECT_EQ(actual, expected);
}
TEST(CalculateTest, Calculate_Test_Case_8) {
    int input1 = 3;
    int input2 = 2;
    Operation input3 = Operation::kBitwise_AND;
    float actual = Calculate(input1,input2,input3);
    float expected = 2;
    EXPECT_EQ(actual, expected);
}
TEST(CalculateTest, Calculate_Test_Case_9) {
    int input1 = 3;
    int input2 = 2;
    Operation input3 = Operation::kBitwise_OR;
    float actual = Calculate(input1,input2,input3);
    float expected = 3;
    EXPECT_EQ(actual, expected);
}
TEST(CalculateTest, Calculate_Test_Case_10) {
    int input1 = 3;
    int input2 = 2;
    Operation input3 = Operation::kBitwise_XOR;
    float actual = Calculate(input1,input2,input3);
    float expected = 1;
    EXPECT_EQ(actual, expected);
}