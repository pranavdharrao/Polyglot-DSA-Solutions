
#include<iostream>
using namespace std;
void Rhombus(int n)
{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }        for(int j=1;j<=n;j++){
            if (i==1||i==n||j==1||j==n)
            {
                cout<<"*";
            } else
            {
  cout << " ";
            }cout<<"/n";
            
        }
    }
}
int main(){
    int n;
    Rhombus(4);
    
}
