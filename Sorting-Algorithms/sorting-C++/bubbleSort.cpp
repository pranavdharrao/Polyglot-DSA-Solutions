#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int counter = 1;
    while(counter<n){
        for (int i = 0; i < n-counter; i++)
        {   
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

/*Bubble Sort:  is a simple comparison-based sorting algorithm that repeatedly steps through the list,
compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated for each element
 in the list until the entire list becomes sorted. Bubble Sort is not very efficient for large datasets due to
  its O(n^2) worst-case time complexity, but it's easy to understand and implement.*/
