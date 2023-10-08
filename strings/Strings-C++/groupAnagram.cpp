//49. Group Anagrams
// https://leetcode.com/problems/group-anagrams/

#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<string, vector<string>> mp;
    for(auto str: strs){
        string s = str;
        sort(s.begin(), s.end());
        mp[s].push_back(str);
    }
    vector<vector<string>> ans;
    for(auto p = mp.begin(); p!= mp.end(); p++){
        ans.push_back(p->second);
    }
    return ans;
}

//Approach2 without sort
class Solution{
    public:

    std::array<int, 256> hash(string s){
        std::array<int, 256> hash={0};
        for(int i=0; i<s.size(); i++){
            hash[s[i]]++;
        }
        return hash;
    }

    vector<vector<string>> groupAnagrams2(vector<string>& strs) {

        map<std::array<int, 256>, vector<string>> mp;
        for(auto str: strs){
            mp[hash(str)].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto p = mp.begin(); p!= mp.end(); p++){
            ans.push_back(p->second);
        }
        return ans;
    }
};

int main(){
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    groupAnagrams(strs);
    Solution obj;
    obj.groupAnagrams2(strs);

    return 0;
}

/*  Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]     */