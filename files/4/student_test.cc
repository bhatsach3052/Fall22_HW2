#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------
TEST(Concatenate1Test, Concatenate_Test_Case_1) {
    int array_1[2] = {1, 2}, size_1 = 2;
    int array_2[3] = {2, 3, 4}, size_2 = 3;
    int* array;
    Concatenate(array_1,size_1,array_2,size_2);
    int array_actual[5] = {1,2,2,3,4};
    for(int i=0; i<(size_1+size_2);i++){
        EXPECT_EQ(array[i], array_actual[i]);
    }
}

TEST(Concatenate2Test, Concatenate_Test_Case_2) {
    std::vector<int> vector_1 = {1,2};
    std::vector<int> vector_2 = {2,3,4};
    std::vector<int> vector_3;
    Concatenate(vector_1,vector_2);
    std::vector<int> vector_expected = {1,2,2,3,4};
    for(int j=0; j<vector_3.size();j++){
        EXPECT_EQ(vector_3[j], vector_expected[j]);
     }
}