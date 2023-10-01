// 53. Maximum Subarray 
// https://leetcode.com/problems/maximum-subarray/description/

#include <iostream>
#include <vector>
using namespace std;

//Kadane's Algorithm v.imp
int maxSubArray(vector<int>& nums) {
    int sum = 0;
    int maxi = nums[0];

    for(int i=0; i< nums.size(); i++){
        sum = sum + nums[i];
        maxi = max(maxi, sum);
        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
}

int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(nums)<<endl;
    // Output: 6
    // Explanation: The sub-array [4,-1,2,1] has the largest sum 6.
    return 0;
}
/*three step approach to learn Kadane's algo
    1. sum += nums[i]       initially sum = 0
    2. maxi = max(maxi, sum)    initially maxi = nums[0]
    3. if(sum < 0) sum =0
*/