#include<iostream>
using namespace std;

int main(){

    int rowCount, colCount;
    cin>>rowCount;
    cin>>colCount;

    

    for(int row = 0; row < rowCount; row += 1){
        if(row == 0 || row == rowCount - 1){
            for(int col = 0; col < colCount; col++){
            cout<<"* ";
            }
        }
        else
        {
            //first star
            cout<<"* ";

            //spaces
            for(int i = 0; i < colCount-2; i += 1){
                cout<<"  ";
            }
            //Last star
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}