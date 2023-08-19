// Given : {1, 0, 0, 1, 0, 1}
// expected output : {0, 0, 0, 1, 1, 1}

#include<iostream>
#include <utility>
using namespace std;

void sort(int arr[], int n){
    int left = 0, right = n-1;

    while (left < right){
        while(arr[left] == 0){
            left++;
        }
        while(arr[right] == 1){
            right--;
        }
        // if code reached here that means arr[left] = 1 and arr[right] = 0
        
        if(left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }       
    }   
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1, 0, 0, 1, 0, 1};
    sort(arr, 6);
    printArray(arr, 6);

    return 0;
}