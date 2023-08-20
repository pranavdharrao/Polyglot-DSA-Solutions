#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // i=1 as we start from 2nd position
    for(int i=1;i<n;i++){
        int current = arr[i];
        int j=i-1;          //sorted
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]= current;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
/*Insertion Sort: is a simple sorting algorithm that builds the final sorted array one item at a time. 
It takes each element from the unsorted part of the array and inserts it into its correct position 
within the already sorted part of the array. This process continues until the entire array is sorted.
 While Insertion Sort also has an average and worst-case time complexity of O(n^2), 
 it performs well for small datasets and can be more efficient than other algorithms for nearly sorted arrays.*/