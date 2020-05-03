#include<iostream>
using namespace std;

void subsequences(char *input, char *output, int i,int j){

    if(input[i] == '\0'){
        output[j] = '\0';
        cout<<output<<endl;
        return;
    }

    output[j] = input[i];
    subsequences(input,output,i+1,j+1);
    subsequences(input,output,i+1,j);
}

int main(){

    char input[10];
    cout<<"Enter a string"<<endl;
    cin>>input;

    char output[100];

    cout<<"Subsequences of "<<input<<endl;
    subsequences(input,output,0,0);


    return 0;
}