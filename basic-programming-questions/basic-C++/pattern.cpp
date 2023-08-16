#include<iostream>
using namespace std;

int main(){
    int i, j, n, m;
    cin>>n>>m;

    // solid rect n x m
    // for(i = 0; i< n; i++){
    //     for(j = 0; j<m; j++){
    //         cout<<"*"<<" ";
    //     }cout<<endl;
    // }

    // for(i = 0; i< n; i++){
    //     for(j = i; j<m; j++){
    //         cout<<"*"<<" ";
    //     }cout<<endl;
    // }


    for(i = j; i< n; i++){
        for(j = 0; j<m; j++){
            cout<<"*"<<" ";
        }cout<<endl;
    }

    return 0;
}