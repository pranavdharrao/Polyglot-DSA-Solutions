//PS GFG (https://practice.geeksforgeeks.org/problems/the-painters-partition-problem1535/1)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
  
    bool isPossibleSol(int A[], int N, int M, long long mid){
        long long timeSum = 0;
        long long c = 1;
        
        for(int i = 0; i < N; i++){
            if(A[i] > mid){
                return false;
            }
            if(timeSum + A[i] > mid){
                c++;
                timeSum = A[i];
                
                if( c > M){
                    return false;
                }
            }
            else{
                timeSum += A[i];
            }
        }
        return true;
    }
    
    long long minTime(int arr[], int n, int k)
    {
        long long s = 0;
        long long end = 0;
        long long ans = -1;
        for(int i =0; i < n; i++){
            end += arr[i];
        }
        while(s <= end){
            long long mid = s + ( end - s)/2;
        
            if(isPossibleSol(arr, n, k, mid)){
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

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
