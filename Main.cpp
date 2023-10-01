#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include "Calculator.h"

using namespace std;

bool is_digit(string userinput);

int main()
{
    bool endLoop = true;
    string userinput;
    vector<int> numbers = {};
    Calculator calculator;
    cout << "Welcome to a C++ Calculator.\n";
    cout << "Begin by typing the integers you would like calculated. Hit enter between each number.\n";
    cout << "When you are done entering numbers, press enter and type the operation you would like to use. (+, -, *, /)\n";
    cout << "To end the program, type \"done\".\n";
    while (endLoop = true)
    {
        cin >> userinput;
        if (is_digit(userinput))
        {
            int num = stoi(userinput);
            numbers.push_back(num);
        }

        else
        {
            if (userinput == "done")
            {
                cout << "Have a great day!";
                endLoop = false;
            }

            else if (userinput == "+")
            {
                cout << "Your sum is: " << calculator.add(numbers) << "\n";
            }

            else if (userinput == "-")
            {
                cout << "Your difference is: " << calculator.subtract(numbers) << "\n";
            }

            else if (userinput == "*")
            {
                cout << "Your product is: " << calculator.multiply(numbers) << "\n";
            }

            else if (userinput == "/")
            {
                cout << "Your quotient is: " << calculator.divide(numbers) << " (To the nearest whole number)\n";
            }

            else
            {
                cout << "Please enter a valid number or operator.\n";
            }

        numbers.clear();
        }
    }

return 0;
}

// Will check if a string text is a number, making it possible to convert it
bool is_digit(string userinput) {
    for (char i : userinput)
    {
        int v = i;
        if (i >= 48 && i <= 57)
        {
            return true;
        }
    }

    return false;
}
