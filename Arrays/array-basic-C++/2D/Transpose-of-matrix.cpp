// Transpose of matrix 
/* 1 2 3     1 4 7
   4 5 6  =  2 5 8
   7 8 9     3 6 9
*/

#include<iostream>
using namespace std;

int main(){
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};


    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            // swap
            int temp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
    }
    // print
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
    

    return 0;
}