#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i,n;
    cin>>n;

    bool flag=0;

    for(i=2;i<sqrt(n);i++){
        if(n%2==0){
            cout<<"Not prime";
        }
        flag=1;
        break;
    }if(flag=0){
        cout<<"Prime";
    }
    
    return 0;
}
