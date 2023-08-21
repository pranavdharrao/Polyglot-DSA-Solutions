#include <iostream>
#include <vector>
using namespace std;

//PS - Find the odd occurring element in a array
// All elements occur even no. of times except one element
// All repeating occurrences of elements appear in pair, pairs are not adjacent 

int solve(vector<int> arr){
    int s = 0;
    int e = arr.size() -1;
    int mid = s + (e -s)/2;

    while(s <= e){
        if(s == e){
            return s;
        }
        //mid(index) is even
        if(mid % 2 == 0){
            if(arr[mid] == arr[mid + 1]){
                s = mid + 2;                         //this mean we are in left part, s = mid + 2 as we've already checked mid + 1
            }
            else{
                e = mid;
            }
        } 
        // mid is odd
        else{
            if(arr[mid] == arr[mid - 1]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        mid = s + (e -s)/2;
    }
    return -1;

}

int main(){
    vector<int> arr = {2, 2, 1, 1, 3, 3, 4, 4, 3, 60, 60, 4, 4};
    int ans = solve(arr);
    cout<<"Index is -> "<< ans <<" Value is -> "<< arr[ans] <<endl;

    return 0;
}