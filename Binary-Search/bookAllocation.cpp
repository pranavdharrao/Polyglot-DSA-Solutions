//PS: GFG [https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article]

#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    
    bool isPossibleSol(int A[], int N, int M, int sol){
        int pageSum = 0;
        int sCount = 1;
        
        for(int i = 0; i < N; i++){
            if(A[i] > sol){
                return false;
            }
            if(pageSum + A[i] > sol){
                sCount++;
                pageSum = A[i];
                
                if( sCount > M){
                    return false;
                }
            }
            else{
                pageSum += A[i];
            }
        }
        return true;
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(M > N) return -1;
        
        int s = 0;
        int end = accumulate(A, A+N, 0);
        int ans = -1;
        
        while(s <= end){
            int mid = s + ( end - s)/2;
        
            if(isPossibleSol(A, N, M, mid)){
                ans = mid;
                end = mid -1;
            }
            else{
                s = mid + 1;
            }
        }
        return ans;
    }
};


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
