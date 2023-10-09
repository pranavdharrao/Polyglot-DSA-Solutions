#include <iostream>
#include <vector>
using namespace std;

//search for nearly sorted array
int bs(vector<int> arr, int target){
    int s = 0;
    int e = arr.size() - 1;

    while(s <= e){
        int mid = s + (e-s)/2;

        if(arr[mid] == target){
            return mid;
        }
        if(mid+1 < arr.size() && arr[mid + 1] == target){
            return mid + 1;
        }
        if((mid-1) >= 0 && arr[mid - 1] == target){
            return mid -1;
        }
        if(arr[mid] < target){
            s = mid + 2;
        }
        else{
            e = mid -2;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){
    vector<int> arr= {3, 5, 4, 6, 7, 9, 8};
    int ans = bs(arr, 7);
    cout<< ans << endl;
    
    return 0;
}