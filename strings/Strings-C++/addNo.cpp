//Add two numbers represented by two arrays

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> addTwoNo(int A[], int B[], int n1, int n2){
    int i = n1 - 1;
    int j = n2 - 1;
    int carry = 0;
    vector<int>ans;

    while(i >= 0 && j >= 0){
        int x = A[i] + B[j] + carry;
        int digit = x % 10;
        carry = x /10;
        ans.push_back(digit);
        i--, j--;
    }
    while(i >= 0){
        int x = A[i] + 0 + carry;
        int digit = x % 10;
        carry = x /10;
        ans.push_back(digit);
        i--;
    }
    while(j >= 0){
        int x =  B[j] + carry;
        int digit = x % 10;
        carry = x /10;
        ans.push_back(digit);
        j--;
    }
    if(carry){
        ans.push_back(carry);
    }
    while (ans[ans.size() -1] == 0)
    {
        ans.pop_back();
    }
    reverse(ans.begin(), ans.end());
    
    return ans;
}

void printArray(const vector<int>& ans) {
    for (size_t i = 0; i < ans.size(); i++) {
        cout << ans[i];
    }
    cout << endl;
}

int main(){
    int A[] = {0, 5, 1, 3, 4, 0};
    int B[] = {0, 5, 3, 9, 5, 0};

    int n1 = sizeof(A) / sizeof(A[0]);
    int n2 = sizeof(B) / sizeof(B[0]);

    vector<int> ans = addTwoNo(A, B, n1, n2);
    printArray(ans);

    return 0;
}