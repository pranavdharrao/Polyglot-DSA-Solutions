#include<iostream>
using namespace std;

int main(){
    
    int n=3;
    
    int a[3];
    int b[3];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    
    int ap=0;
    int bp=0;
    int cp=0;
    
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            ap++;
        }
        else if(a[i]==b[i]){
            cp++;
        }
        else{
            bp++;
        }
    }
    
    cout<<ap<<" "<<bp<<endl;
    return 0;
}