#include<iostream>
using namespace std;

void subsequence(char *input, char *output, int i ,int j){
    // base case

    if(input[i] == '\0'){
        output[j] = '\0';
        cout<<output<<endl;
        return;
    }

    // recursive case
    // first take ith character
    output[j] = input[i];
    subsequence(input,output,i+1,j+1);

    // dont take ith character
    subsequence(input,output,i+1,j);

}


int main(){

    char input[10];
    cin>>input;

    char output[100];

    subsequence(input,output,0,0); 

    return 0;
}