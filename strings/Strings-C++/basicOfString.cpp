#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int getLength(char ch[]){
    int i =0;
    int length = 0;

    while(ch[i] != '\0'){
        length++;
        i++;
    } 
    return length;
}

void reverseCharArray(char name[]){
    int i =0;
    int n = getLength(name);
    int j = n-1;

    while(i <= j){
        swap(name[i], name[j]);
        i++, j--;
    }
}

bool checkPalindrome(char name[]){
    int i = 0;
    int n = getLength(name);
    int j = n-1;

    bool isPalindrome;
    while(i <= j){
        if(name[i] != name[j]){
        return false;
        }
        else{
            i++, j--; 
        }
    }
    return true;
}

void toUppercase(char name[]){
    int n = strlen(name);

    for(int i = 0; i < n; i++){
        if(name[i] >= 'a' && name[i] <='z'){
            name[i] = name[i] - 'a' + 'A';        //for name[i] = c--> c = 'c' - 'a' + 'A',  name[i] = 99 - 97 + 65 = 67 | C=67
        }
    }
}

int main(){
    char ch[100];
    //cin>>ch;
    cin.getline(ch, 50);
    //cout<<getLength(ch)<<endl;
    // cout<<"Initially "<<ch<<endl;
    // reverseCharArray(ch);
    // cout<<"Reversing: "<<ch<<"\n";

    // if(checkPalindrome(ch)){
    //     cout<<"palindrome"<<endl;
    // }
    // else{
    //     cout<<"not a palindrome"<<endl;
    // }

    toUppercase(ch);
    cout<<ch<<endl;


    return 0;
}