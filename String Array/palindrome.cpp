#include<iostream>
using namespace std;

int length(char *str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

bool palindrome(char * str){
    int i = 0;
    int j = length(str) -1;
    while(i < j){
        if(str[i] != str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){

    char str[100];
    cin.getline(str,100);

    bool isPalindrome = palindrome(str);

    if(isPalindrome){
        cout<<"String is palindrome "<<endl;
    }
    else{
        cout<<"String is not palindrome"<<endl;
    }

    return 0;
}