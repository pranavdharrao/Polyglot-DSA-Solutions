#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;

    //full hollow pyramid

    for(int row = 0; row < n; row++){
        int k =0;
        for(int col = 0; col < ((2*n) - 1); col++){
            if(col < n - row - 1){
            cout<<"  ";
            }
            else if(k < (2 * row) + 1){
                if(k == 0 || k == 2 * row || row == n - 1){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }k++;
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    //full pyramid  row x 2*col-1
    for(int row = 0; row < n; row++){
        int k =0;
        for(int col = 0; col < ((2*n) - 1); col++){
            if(col < n - row - 1){
            cout<<"  ";
            }
            else if(k < (2 * row) + 1){
                cout<<"* ";
                k++;
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    //full pyramid  row x col
    
    for(int row = 0 ;row < n; row++) {
        //for spaces
        for(int col = 0; col < n-row - 1; col++){
            cout<<" ";
        }
        //for stars
        for(int col = 0; col< row + 1; col++){
            cout<<" *";
        }
        cout<<endl;
    }

    // inverted full pyramid  row x col
    
    for(int row = 0 ;row < n; row++) {
        //for spaces

        for(int col = 0; col < row + 1; col++){
            cout<<" ";
        }
        for(int col = 0; col < n-row; col++){
            cout<<"* ";
        }
        
        cout<<endl;
    }

    return 0;
}