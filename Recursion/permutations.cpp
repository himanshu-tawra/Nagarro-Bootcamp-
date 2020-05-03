#include<iostream>
using namespace std;

void permutations(char *input,int i){
    if(input[i] == '\0'){
        cout<<input<<endl;
        return;
    }

    for(int j = i; input[j] != '\0'; j++){
        swap(input[i],input[j]);
        permutations(input,i+1);
        swap(input[i],input[j]);
    }
}

int main(){

    char input[10];
    cout<<"Enter a string"<<endl;
    cin>>input;

    permutations(input,0);

    return 0;
}