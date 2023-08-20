#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n; j++){  // unsorted part
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for(int i=0; i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }

    return 0;
}

/*Selection Sort is a simple comparison-based sorting algorithm that works by repeatedly selecting the smallest (or largest)
 element from the unsorted part of the array and swapping it with the element at the current position in the sorted part.
Selection sort always requires O(n^2) comparisons and O(n) swaps in the worst case. 
There are more efficient sorting algorithms like Quick Sort, Merge Sort, and Heap Sort that have better time complexities.*/