#include "Calculator.h"
#include <numeric>

int Calculator::add(const std::vector<int>& numbers) {
    return accumulate(numbers.begin(), numbers.end(), 0);
}

int Calculator::subtract(const std::vector<int>& numbers) {
    size_t numbersSize = numbers.size();
    int difference = numbers[0];
    for (unsigned int i = 1; i < numbersSize; i++)
    {
        difference -= numbers[i];
    }

    return difference;
}

int Calculator::divide(const std::vector<int>& numbers) {
    size_t numbersSize = numbers.size();
    int quotient = numbers[0];
    for (unsigned int i = 1; i < numbersSize; i++)
    {
        quotient /= numbers[i];
    }

    return quotient;
}

int Calculator::multiply(const std::vector<int>& numbers) {
    size_t numbersSize = numbers.size();
    int product = 1;
    for (unsigned int i = 0; i < numbersSize; i++)
    {
        product *= numbers[i];
    }
        
    return product;
}
