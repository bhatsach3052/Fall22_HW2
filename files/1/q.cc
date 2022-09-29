#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <unordered_map>

int CountCharacters(std::string& input, std::vector<char> characters){
    std::unordered_map<char,int>  map;
    int i=0,count=0;
    for(i = 0; i<input.size();i++){
        if((characters[i]>='A') && (characters[i]<'Z')){
            characters[i] = (characters[i] - 'A') + 'a';
        }
    }
     
    for(i = 0; i<input.size();i++){
        if((input[i]>='A') && (input[i]<'Z')){
            input[i] = (input[i] - 'A') + 'a';
        }
        map[input[i]]++;

    }
    for(int i=0; i<characters.size();i++){
        count = count + map[characters[i]];
    }
    return count;
}
