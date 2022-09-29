#include "q.h"

    #include <cmath>
    #include <iostream>
    #include <list>
    #include <string>
    #include <vector>
    // TODO:
    // 1. Implement the the functions in q.h.
    // 2. Write some unit tests for them in student_test.cc

    // Given two integers, returns the result of the operation based on the given
    // operator.
  float Calculate(int a, int b, Operation operation){
    switch (operation)
    {
    case Operation::kAdd:
        return (float)(a+b);
        break;
    case Operation::kSubtract:
        return (float)(a-b);
        break;
    case Operation::kDivision:
        return (float)(a)/(float)(b);
        break;
    case Operation::kMultiplication:
        return (float)(a*b);
        break;
    case Operation::kBitwise_AND:
        return (float)(a&b);
        break;
    case Operation::kBitwise_OR:
        return (float)(a|b);
        break;
    case Operation::kBitwise_XOR:
        return (float)(a^b);
        break;
    case Operation::kShift_right:
        return (float)(a>>b);
        break;
    case Operation::kShift_left:
        return (float)(a<<b);
        break;
    
    default:
        break;
    }
    return 0;
}
