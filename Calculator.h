#pragma once
#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <vector>

class Calculator {
public:
    int add(const std::vector<int>& numbers);
    int subtract(const std::vector<int>& numbers);
    int divide(const std::vector<int>& numbers);
    int multiply(const std::vector<int>& numbers);
};

#endif //CALCULATOR_H

