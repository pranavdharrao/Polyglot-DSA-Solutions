#include <iostream>
#include <string>
#include <algorithm>

std::string reverseString(const std::string &s) {
    std::string reversed = s;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}

int main() {
    std::string inputString = "hello";
    std::string reversedString = reverseString(inputString);
    std::cout << "The reversed string is: " << reversedString << std::endl;
    return 0;
}
