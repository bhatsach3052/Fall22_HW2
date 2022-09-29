#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <unordered_map>
// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc
void UniqueVectorNotBySet(std::vector<int> &input){
    std::vector<int> out;
    for(int i=0;i<input.size();i++){
        int j=0;
        for(j=0;j<out.size();j++){
            if(input[i]==out[j]){
                break;
            }
        }
        if(j==out.size()){
            out.push_back(input[i]);
        }
    }
    input.clear();
    for(int k=0; k<out.size();k++){
        input.push_back(out[k]);
    }


}
//
// You can use std::set, but you can use std::map.
void UniqueVectorBySet(std::vector<int> &input){
    std::set<int> s;
    std::set<int>::iterator itr;
    for(int i=0;i<input.size();i++){
        s.insert(input[i]);
    }
    input.clear();
    for(itr=s.begin(); itr!=s.end();itr++){
        input.push_back(*itr);
    }
    return;
}

std::vector<int> IntersectVectors(std::vector<int> &input1,
                                  std::vector<int> &input2)
{
    std::unordered_map<int,int> map;
    std::vector<int> output;
    for(int i=0;i<input1.size();i++){
        map[i]++;
    }
    UniqueVectorBySet(input2);
    for(int j=0;j<input2.size();j++){
        if(map.count(input2[j]) > 0){
            output.push_back(input2[j]);
        }
    }
    return output;
}