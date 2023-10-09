#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int s = 0;  //startPoint
    int e = n;  //endPoint

    while (s<=e)
    {
        int mid = (s+e)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else
        {
            s=mid+1;
        } 
    }
    return -1;   
}

int main(){
    int n;
    cin>>n;

    int arr[n];     //initializing array of size n

    for(int i=0;i<n; i++){
        cin>>arr[i];           //pushing elements in array
    }

    int key;
    cin>>key;

    cout<<binarySearch(arr, n, key)<<endl;      //function call

    return 0;
}