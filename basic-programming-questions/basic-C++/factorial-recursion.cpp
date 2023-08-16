#include <iostream>

unsigned int factorial(unsigned int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    unsigned int num = 16;
    unsigned int fact = factorial(num);
    std::cout << "The factorial of " << num << " is " << fact << std::endl;
    return 0;
}

/*Using unsigned int for the factorial calculation to prevent negative values from being used as input.
It has a larger range of positive values than the int data type because it doesn't need to allocate space for negative values.
This can be useful when dealing with non-negative quantities like factorials.
This code calculates the factorial only upto 16! , beyond it will overflow.
For factorial of large number refer to the code in /leetcode/maxFactorial.cpp
 */