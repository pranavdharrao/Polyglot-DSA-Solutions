#include<iostream>
using namespace std;

int findUnique(int *arr, int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
        cout<<ans<<" ";
    }
    return ans;
}

int main(){
    int arr[5] = {1, 3, 1, 4 ,3};
    int unique = findUnique(arr, 5);
    cout << "Unique element: " << unique << endl;
    return 0;
}
