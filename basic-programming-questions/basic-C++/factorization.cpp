#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> primeFactors(int n) {
    vector<int> factors;
    int divisor = 2;
    while (n > 1) {
        while (n % divisor == 0) {
            factors.push_back(divisor);
            n /= divisor;
        }
        divisor++;
    }
    return factors;
}

int main() {
    int number = 57;
    vector<int> primeFactorList = primeFactors(number);
    cout << "The prime factors of " << number << " are: ";
    for (int factor : primeFactorList) {
        cout << factor << " ";
    }
    cout << endl;
    return 0;
}


// you can use a set to store unique divisors, here is the implementation

// set<int> primeFactors(int n) {
//     set<int> factors;  
//     int divisor = 2;
//     while (n > 1) {
//         while (n % divisor == 0) {
//             factors.insert(divisor);
//             n /= divisor;
//         }
//         divisor++;
//     }
//     return factors;
// }

// int main() {
//     int number = 56;
//     set<int> primeFactorList = primeFactors(number);
//     cout << "The prime factors of " << number << " are: ";
//     for (int factor : primeFactorList) {
//         cout << factor << " ";
//     }
//     cout << endl;
//     return 0;
// }
