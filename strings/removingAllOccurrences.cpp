//1910. Remove All Occurrences of a Substring
//https://leetcode.com/problems/remove-all-occurrences-of-a-substring/


#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        int position = s.find(part);

        while(s.find(part)<s.size()){
            s.erase(s.find(part),part.size());
        }
        return s;
    }
};

//another approach
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int position = s.find(part);

        while(position != string::npos){
            s.erase(position, part.length());
            position = s.find(part);
        }
        return s;
    }
};

int main(){
    
    return 0;
}