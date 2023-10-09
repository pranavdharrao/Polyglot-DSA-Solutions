#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int firstOcc(vector<int>& v, int target){
    int s =0;
    int e = v.size() - 1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e){
        if(v[mid] == target){
            ans = mid;
            //for last occurrence, search in right part   s = mid +1;
            //for first occurrence, search in left part
            e = mid -1;
        }
        else if(v[mid] < target){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){

    vector<int> v{2, 4, 5, 6, 6, 6, 6, 6, 7, 9};
    int ans = firstOcc(v, 6);
    cout<<"First occurrence is at index :"<<ans<<endl;

    auto ans1 = lower_bound(v.begin(), v.end(), 6);  //first occurrence
    auto ans2 = upper_bound(v.begin(), v.end(), 6);  //last occurrence

    cout<<"First occurrence is :"<<(ans1 - v.begin())<<endl;  // - v.begin() because ans1 return an address
    cout<<"Last occurrence is at index :"<<(ans2 - v.begin()) - 1<<endl;
    cout<<"Total occurrence is equal to :"<<(ans2 - v.begin()) - (ans1 - v.begin()) <<endl;
    
    return 0;
}