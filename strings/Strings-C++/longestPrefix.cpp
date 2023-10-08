//Leetcode: 14. Longest Common Prefix
// https://leetcode.com/problems/longest-common-prefix/description/
/*Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"
*/

#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int i=0;

        while(true){
            char curr_ch = 0;
            for(auto str : strs){
                if(i >= str.size()){   //out of bound
                //str represent a single string like "flow"
                    curr_ch =0;
                    break;
                }
                //just started
                if(curr_ch == 0){
                    curr_ch = str[i];   //same as giving strs[i][j]
                }
                else if(str[i] != curr_ch){
                    curr_ch =0;
                    break;
                }
            }
            if(curr_ch == 0){
                break;
            }
            ans.push_back(curr_ch);
            i++;
        }
        return ans;
    }

int main(){
    vector<string> strs = {"flower","flow","flight"};
    cout<<longestCommonPrefix(strs)<<endl;

    return 0;
}