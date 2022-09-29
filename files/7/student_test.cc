#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(UniqueVectorNotBySetTest, UniqueVectorNotBySet_Test_Case_1) {
    std::vector<int> vector = {1,2,2,4,4,5,5,5,6,5,6,8};
    UniqueVectorNotBySet(vector);
    std::vector<int> vector_expected = {1,2,4,5,6,8};
    EXPECT_EQ(vector, vector_expected);
}

TEST(UniqueVectorBySetTest, UniqueVectorBySet_Test_Case_1) {
    std::vector<int> vector = {1,2,2,4,4,5,5,5,6,5,6,8};
    UniqueVectorBySet(vector);
    std::vector<int> vector_expected = {1,2,4,5,6,8};
    EXPECT_EQ(vector, vector_expected);
}
TEST(IntersectVectorsTest, IntersectVectors_Test_Case_1) {
    std::vector<int> input1 = {1,2,2,3};
    std::vector<int> input2 = {3,4,4,5,2,2,2,1};
    std::vector<int> actual;
    actual = IntersectVectors(input1,input2);
    std::vector<int> expected = {1,2,3};
    EXPECT_EQ(actual, expected);
}