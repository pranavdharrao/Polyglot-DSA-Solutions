//https://leetcode.com/problems/valid-anagram/description/

#include <iostream>
using namespace std;

bool isAnagram(string s, string t) {
        int freqTable[256] = {0};

        for(int i=0; i< s.size(); i++){
            freqTable[s[i]]++;
        }
        for(int i=0; i< t.size(); i++){
            freqTable[t[i]]--;
        }
        for(int i=0; i < 256; i++){
            if(freqTable[i] != 0){
                cout<<"Not a Anagram"<<endl;
                return false;
            }
        }
        cout<<"Anagram"<<endl;
        return true;
}

int main(){
    isAnagram("anagram", "nagaram");
    return 0;
}
