#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(const string &s) {
    string lowercase = s;       //Convert to lowercase for case-insensitive comparison
    transform(lowercase.begin(), lowercase.end(), lowercase.begin(), ::tolower);
    string reversed = lowercase;
    reverse(reversed.begin(), reversed.end());
    return lowercase == reversed;
}

int main() {
    string word = "radar";
    if (isPalindrome(word)) {
        cout << word << " is a palindrome." << endl;
    } else {
        cout << word << " is not a palindrome." << endl;
    }
    return 0;
}
