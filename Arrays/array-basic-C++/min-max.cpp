#include<iostream>
#include<climits>

using namespace std;

int main(){

    int n;
    cin>>n;

    int minNo = INT_MAX;
    int maxNo = INT_MIN;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        // if(arr[i]<minNo){
        //     minNo = arr[i];
        // }
        // if(arr[i]>maxNo){
        //     maxNo = arr[i];
        // }

        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);

    }

    cout<<minNo<<" "<<maxNo;

    return 0;
}
