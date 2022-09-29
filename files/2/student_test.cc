#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(IndexOfFirstSpaceTest, IndexOfFirstSpace_Test_Case_1) {
    std::string input = "This is my test";
    int actual = Reverse(input);
    int expected = 4;
    EXPECT_EQ(actual, expected);
}

TEST(SeparateFirstAndLastNamesTest, SeparateFirstAndLastNames_Test_Case_1) {
    std::string input = "Sachin Bhat";
    std::string firstname;
    std::string lastname;
    SeparateFirstAndLastNames(input,firstname,lastname);
    std::string expected1 = "Sachin";
    std::string expected2 = "Bhat";
    EXPECT_EQ(firstname, expected1);
    EXPECT_EQ(lastname, expected2);
}
TEST(NumberOfConsonantsTest, NumberOfConsonants_Test_Case_1) {
    std::string input = "Sachin Bhat";
    int actual = NumberOfConsonants(input);
    int expected = 7;
    EXPECT_EQ(actual, expected);
}
TEST(NumberOfVowelsTest, NumberOfVowels_Test_Case_1) {
    std::string input = "Sachin Bhat";
    int actual = NumberOfVowels(input);
    int expected = 3;
    EXPECT_EQ(actual, expected);
}
TEST(ReverseTest, Reverse_Test_Case_1) {
    std::string input = "Sachin";
    int actual = Reverse(input);
    std::string expected = "nihcaS";
    EXPECT_EQ(input, expected);
}