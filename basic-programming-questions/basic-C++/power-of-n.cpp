#include <iostream>

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    return base * power(base, exponent - 1);
}

int main() {
    double base = 2;
    int exponent = 3;
    double result = power(base, exponent);
    std::cout << base << " raised to the power of " << exponent << " is " << result << std::endl;
    return 0;
}
