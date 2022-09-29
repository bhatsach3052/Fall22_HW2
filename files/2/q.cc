#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc
int IndexOfFirstSpace(std::string& input){
    int i=0;
    for(i=0; i<input.size();i++){
        if(input[i] == ' '){
            return i;
        }
    }
    return i;
}

// Given the full_name, it returns the first_name and last_name.
// Note: you should use IndexOfFirstSpace function and cannot use any other
// std:: functions.
void SeparateFirstAndLastNames(std::string& full_name, std::string& first_name,
                               std::string& last_name)
{
    int i=0,j = IndexOfFirstSpace(full_name);
    for(i=0; i<j;i++){
        first_name.push_back(full_name[i]);
    }
    for(i = 0; i<(full_name.size()-j);i++){
        last_name.push_back(full_name[j+i+1]);
    }
    return;
}

// Returns the number of vowels (a, e, i, o, u) in a string.
// Your algorithm should be case insensitive.
int NumberOfVowels(std::string& input){
    int i=0,count=0;
    for(i=0;i<input.length();i++){
        if((input[i]>='A') && (input[i]<'Z')){
            input[i] = (input[i] - 'A') + 'a';
        }
        if((input[i]=='a') || (input[i]=='e') || (input[i]=='i') || (input[i]=='o') || (input[i]=='u')){
            count++;
        } 
    }
    return count;
}

// Returns the number of consonants (letters that are not a, e, i, o, u) in a
// string.
// Your algorithm should be case insensitive.
int NumberOfConsonants(std::string& input){
    int i=0,count=0;
    for(i=0;i<input.length();i++){
        if((input[i]>='A') && (input[i]<'Z') || (input[i]>='a') && (input[i]<'z')){
           
            count++;
        }
        
    }
    return (count - NumberOfVowels(input));
}

// Returns the revers of a string.
// Example input: 'ted', output: 'det'.
// Note: You cannot use any std:: functions.
int Reverse(std::string& input){
    std::string output;
    for(int i=input.size()-1;i>=0;i--){
        output.push_back(input[i]);
    }
    input = output;
    return 0;
}