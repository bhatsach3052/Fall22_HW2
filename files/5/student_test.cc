#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------

TEST(SwapByPointerTest, SwapByPointer_Test_Case_1) {
    float a = 2.3;
    float b = 3.4;
    SwapByPointer(&a,&b);
    float expected1 = 3.4;
    float expected2 = 2.3;
    EXPECT_EQ(expected1, a);
    EXPECT_EQ(expected2, b);
}

TEST(SwapByReferenceTest, SwapByReference_Test_Case_1) {
    float a = 2.3;
    float b = 3.4;
    SwapByReference(a,b);
    float expected1 = 3.4;
    float expected2 = 2.3;
    EXPECT_EQ(expected1, a);
    EXPECT_EQ(expected2, b);
}
