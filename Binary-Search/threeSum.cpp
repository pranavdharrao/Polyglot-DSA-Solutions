// Leetcode 15 Three sum https://leetcode.com/problems/3sum/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for(int i=0; i<n; i++){
            int a = nums[i];
            int target = -a;        // as a+b+c =0, b+c = -a
            int s = i+1;
            int e = n-1;

            while(s<e){
                if(nums[s] + nums[e] == target){
                    ans.push_back({nums[i], nums[s], nums[e]});
                    //ans.insert({nums[i], nums[s], nums[e]}); but return type is 2D vector
                    while(s<e && nums[s] == nums[s+1]) s++; //to avoid duplicates
                    while(s<e && nums[e] == nums[e-1]) e--;
                    s++;
                    e--;
                }
                else if(nums[s] + nums[e] > target){
                    e--;
                }
                else{
                    s++;
                }
            }
            while(i+1 < n && nums[i+1] == nums[i]) i++;
        }
        return ans;
    }
};

int main(){
    
    return 0;
}