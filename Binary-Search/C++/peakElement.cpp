// 162. Find Peak Element
// https://leetcode.com/problems/find-peak-element/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;

       while (s < e) {
            int mid = s + (e - s) / 2;
            if(nums[mid] < nums[mid + 1]){
                s = mid + 1;
            }
            else{
                e = mid;
            }
             
        }
        return s;
    }
};
int main(){
    vector<int> nums = {1,2,1,3,10,6,4};
    Solution obj;
    cout << obj.findPeakElement(nums)<<endl;

    return 0;
}
