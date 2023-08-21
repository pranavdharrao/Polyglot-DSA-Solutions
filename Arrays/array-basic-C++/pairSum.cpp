#include<iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int target){
// Sample Input 1:
// 5 5
// 1 2 3 4 5
// Sample Output 1:
// 1 4
// 2 3
// Explaination For Sample Output 1:
// Here, 1 + 4 = 5
//       2 + 3 = 5
// Hence the output will be, (1,4) , (2,3).
   vector<vector<int>> answer;
   int i=0,j=1;
   for(int i=0;i<arr.size()-1;i++){
        while(j<arr.size()){
            if(arr[i]+arr[j]==target){
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[j],arr[i]));
                answer.push_back(temp);
              
            }
            j++;
        }
        j=i+2;

   }
   sort(answer.begin(),answer.end());
   return answer;
}

