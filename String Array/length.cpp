#include<iostream>
using namespace std;

int length(char *arr){

    int i = 0;
    while(arr[i] != '\0'){
        i++;
    }
    return i;
}


int main(){

    char arr[100];
    cin.getline(arr,100);

    cout<<"Length : "<<length(arr)<<endl;

    return 0;
}