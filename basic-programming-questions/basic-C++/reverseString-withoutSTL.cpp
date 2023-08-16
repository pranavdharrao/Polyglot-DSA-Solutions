#include <iostream>

void reverseString(char str[], int length) {
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char input[] = "hello";
    int length = sizeof(input) - 1;  // Exclude the null-terminator
    std::cout << "Original String: " << input << std::endl;
    reverseString(input, length);
    std::cout << "Reversed String: " << input << std::endl;
    return 0;
}
