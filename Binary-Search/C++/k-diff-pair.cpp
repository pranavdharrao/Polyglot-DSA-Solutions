/*leetCode 532
input [1, 4, 1, 3, 5] k = 2 --> output 2 {1, 3}, {3, 5}
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int bs(vector<int>& arr, int start, int x){
    int end = arr.size() - 1;

    while(start < end){
        int mid = start + (end - start)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid] < x){
            start = mid + 1;
        }
        else {
            end = mid -1;
        }
    }
    return -1;
};
int findPair(vector<int>& arr, int k){
    sort(arr.begin(), arr.end());
    set<pair<int, int>> ans;

    for(int i = 0; i < arr.size(); i++){
        
    }

}
int main(){
    
    return 0;
}