// https://practice.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1
#include <bits/stdc++.h>
using namespace std;

class Solution
{
	public:
    int gcd(int A, int B) 
	{ 
	      if(A == 0 ) return B;
	      if(B == 0) return A;
	      
	      while(A > 0 && B > 0){
	          if(A > B){
	              A = A - B;
	          }
	          else{
	              B = B - A;
	          }
	      }
	      return A == 0 ? B : A;
	} 
};

int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
       	cout <<  ob.gcd(A, B) << "\n";
    }
    return 0;
}