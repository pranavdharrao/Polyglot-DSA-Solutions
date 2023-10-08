#include <iostream>
#include <vector>
using namespace std;

void wavePrintMatrix(vector<vector<int>> v){
    //rows in matrix
    int row = v.size();
    int col = v[0].size();

    for(int startCol = 0; startCol < col; startCol++){
        //even no. col top to bottom -->
        // if(startCol &1 ) bitwise
        if((startCol & 1) == 0){
            for(int i = 0;i < row; i++){
                cout<<v[i][startCol]<<" ";
            }
        }
        else{
            //odd no of col
            for(int i = row -1; i >= 0; i--){
                cout<<v[i][startCol]<<" ";
            }
        }
    }
}

int main(){
    
    vector<vector<int>> v{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    wavePrintMatrix(v);

    return 0;
}