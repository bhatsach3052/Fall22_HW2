#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc

int* Concatenate(int* array_1, int size_1, int* array_2, int size_2){
    int i;
    int *array{ new int[size_1+size_2]};
    
    for(i=0;i<size_1;i++){
        array[i] = *array_1++;
    }
    for(i=0;i<size_2;i++){
        array[i+size_1] = *(array_2++);
    }

    return array;
}

std::vector<int> Concatenate(std::vector<int>& vector_1,
                             std::vector<int>& vector_2)
{
    std::vector<int> out;
    int i;
    for(i=0;i<vector_1.size();i++){
        out.push_back(vector_1[i]);
    }
    for(i=0;i<vector_2.size();i++){
        out.push_back(vector_2[i]);
    }

    return out;
}

