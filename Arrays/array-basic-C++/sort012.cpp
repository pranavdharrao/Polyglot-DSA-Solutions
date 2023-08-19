// Given : {0, 2, 1, 2, 0}
// expected output : {0, 0, 1, 2, 2}
//https://leetcode.com/problems/sort-colors/

#include<iostream>
using namespace std;


void sort012(int arr[], int n)
{
    // code here 
    int zero = 0 , one = 0 ,  two=0;
        
    for(int i=0;i<n ; i++)
{
    if(arr[i] == 0 )zero ++;
    else if(arr[i] == 1) one++;
    else two++;
}
  for(int i=0;i<n ; i++)
{
    if(i<zero) arr[i] = 0;
    else if (i<zero+one) arr[i] = 1;
    else arr[i] = 2;
}

};

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t[] = {0, 2, 1, 2 ,1 ,0, 1, 2, 0};
    sort012(t , 9);
    printArray(t, 9);

    return 0;
}