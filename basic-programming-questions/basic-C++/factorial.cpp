#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;

    for(int i=2;i<=n;i++){
        factorial*= i;
    }
    return factorial;
}

int main(){

    int n;
    cout<<"n should be less than 17"<<endl;
    cin>>n;

    int ans = fact(n);
    cout<<ans<<endl;

    return 0;
}

//This code calculates the factorial only upto 16! , beyond it will overflow
// For factorial of large number refer to the code in /leetcode/maxFactorial.cpp
