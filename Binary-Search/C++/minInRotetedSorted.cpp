//Leetcode 153. Find Minimum in Rotated Sorted Array
// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

 int findMin(vector<int>& nums) {
    int s = 0, e = nums.size() -1;
    int mid = s+(e-s)/2;

    while (s < e) {

        if (nums[mid] > nums[e]) {
            // The minimum element must be in the right half.
            s = mid + 1;
        } else if (nums[mid] < nums[e]) {
            e = mid;
        } else {
            // Handle the case when nums[mid] == nums[e].
            e--;
        }
        mid = s+(e-s)/2;
    }       
    return nums[s]; //eliminating the need for the ans variable.

}
int findMin2(vector<int>& nums) {
        int ans = INT_MAX;
        int s = 0, e = nums.size() -1;
        int mid = s+(e-s)/2;
        while(s <= e){
               
            if(nums[s] <= nums[mid]){
                ans = min(nums[s], ans);
                s = mid+1;
            }
            else{
                ans = min(nums[mid], ans);
                e = mid -1;
            }
            mid = s+(e-s)/2;
        }
        return ans;

    }
int main(){
    vector<int> nums = {4,5,6,7,0,1,2};
    findMin(nums);

    return 0;
}