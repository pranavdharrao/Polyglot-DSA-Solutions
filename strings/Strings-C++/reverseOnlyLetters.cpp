//Leetcode 917: https://leetcode.com/problems/reverse-only-letters/description/
#include <iostream>
using namespace std;

string reverseOnlyLetters(string s) {
    int l = 0, h = s.size()-1;

    while(l < h){
        if(isalpha(s[l]) && isalpha(s[h]) ){
            swap(s[l], s[h]);
            l++, h--;
        }
        else if(!isalpha(s[l])){
            l++;
        }
        else h--;
    }
    for(int i=0; i < s.size(); i++){
        cout<<s[i];
    }
    cout<<endl;

    return s;
}

int main(){
    string s = "Test1ng-Leet=code-Q!";
    reverseOnlyLetters(s);
    return 0;
}