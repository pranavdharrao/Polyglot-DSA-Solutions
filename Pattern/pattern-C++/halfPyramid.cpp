#include <iostream>
using namespace std;

// void staircase(int n) {
//     for(int row =0; row<n; row++){
//         //spaces
//         for(int col=0; col < n -row -1; col++){           *
//             cout<<" ";                                   **
//         }                                               ***
//                                                        ****
//         for(int col=0; col <= row; col++){
//             cout<<"#";    if cout<<" *" full pyramid
//         }
//         cout<<endl;
//     }
// }

int main(){
    
    int n;
    cin>>n;

    // for(int row = 0; row < n; row++){
    //     for( int col = 0; col < row + 1; col++){
    //         cout<<"* ";
    //     }cout<<endl;
    // }

    //inverse pyramid

    // for(int row = 0; row < n; row++){
    //     //for(int col = row; col<n; col++){}    also works
    //     for( int col = 0; col < n-row; col++){
    //         cout<<"* ";
    //     }cout<<endl;
    // }

    //numeric pyramid

    // for(int row = 0; row < n; row++){                               //1
    //     for( int col = 0; col < row + 1; col++){                    //1 2
    //         cout<<col + 1<<" ";                                     //1 2 3
    //     }cout<<endl;                                                //1 2 3 4
    // }                                                               //1 2 3 4 5

    //inverted numeric pyramid
        // for(int row = 0; row < n; row++){                        5 
        //     for( int col = 0; col < row + 1; col++){             5 4
        //         cout<<n - col<<" ";                              5 4 3
        //     }cout<<endl;                                         5 4 3 2
        // }                                                        5 4 3 2 1

    //  for(int row = 0; row < n; row++){                              //1 2 3 4 5
    //     for( int col = 0; col < n - row; col++){                    //1 2 3 4
    //         cout<<col + 1<<" ";                                     //1 2 3
    //     }cout<<endl;                                                //1 2
    // }   
    
    // inverted hollow pyramid

    for (int row = 0; row < n; row++) {
            for (int col = 0; col < n - row; col++) {
                if (row == 0 || col == 0 || col == n - row -1){
                    cout << " *";
                }
                else{
                    cout<<"  ";
                }
                
            }     
        cout << endl;
    }

    return 0;
}