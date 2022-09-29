#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(CountCharactersTest, CountCharacters_Test_Case_1) {
    std::string input1 = "This is my test";
    std::vector<char> input2 = {t,h};
    int actual = CountCharacters(input1,input2);
    int expected = 4;
    EXPECT_EQ(actual, expected);
}