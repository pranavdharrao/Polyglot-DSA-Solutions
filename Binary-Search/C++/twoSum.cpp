// 2 sum using binary search
#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> v;
        for(int i=0;i<n;i++) v.push_back({nums[i], i});
        sort(v.begin(), v.end());
        int s=0, e=n-1;

        //two pointer approach ,  .first to access element, .second to access index
        while(s<e){
            int sum = v[s].first + v[e].first;
            if(sum == target){
                return {v[s].second, v[e].second};
            }
            if(sum > target)e--;
            else s++;
        }
        return {-1, -1};
    }
};

using namespace std;

int main(){
    
    return 0;
}

// https://leetcode.com/problems/two-sum/description/
/*Here Given an array of integers nums and an integer target,
we have to return indices of the two numbers such that they add up to target.
A brute force solution could be using two loop, checking all possible pairs that sum up to target
I first tried to apply binary search for this problem, but for binary search array should be sorted which is not given.
If we sort the array and then applied the binary search we will get the required element, but their indices are changed now
because of sorting. So in this solution I used a <vector<pair<int, int>> to store both the elements and their indices.
First we will access the element and once we got the element we will return their indices by using 
{v[s].second, v[e].second}*/