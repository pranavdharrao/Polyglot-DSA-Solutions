#include <iostream>
using namespace std;

int bs(int a[],int start, int end, int x){
    while(start <= end){
        int mid = (start + end)/2;
        if(a[mid] == x){
            return mid;
        }
        else if(a[mid] < x){
            start = mid+1;
        }
        else{
            end = mid -1;
        }
    }
    return -1;
}

int expSearch(int a[], int n, int x){
    if(a[0] == x) return 0;
    
    int i = 1;
    while(i < n && a[i] <= x){
        i = i*2;        //i*=2, i = i<<1
    }
    return bs(a, i/2, min(i, n),x);
                 //s    //end
}

int main(){
    int a[] = {3, 4, 6, 12, 26, 36, 54, 65};
    int n = sizeof(a) / sizeof(int);
    int x = 36;
    int ans = expSearch(a, n, x);
    cout<< ans<< endl;
    return 0;
}

//Intuition: Instead of passing a whole array for binary search, we are passing a sub-array to the binary search function 
//where the required element might reside. In exponential function, instead of increasing the i by 1(i++), we are incrementing 
//the i by i *= 2;
//Exponential search provide better time complexity when dealing with a large array.