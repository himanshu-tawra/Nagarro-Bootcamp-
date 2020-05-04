#include<iostream>
using namespace std;

char keys[][10] = {
    "","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"
};


void phoneKeyPad(char *in,char *out,int i ,int j){
    if(in[i] == '\0'){
        out[j] = '\0';
        cout<<out<<endl;
        return;
    }

    int digit = in[i] - '0';
    for(int k = 0; keys[digit][k] != '\0';k++ ){
        out[j] = keys[digit][k];
        phoneKeyPad(in,out,i+1,j+1);
    }
}

int main(){


    char in[100];
    char out[100];
    cout<<"Enter the numbers"<<endl;
    cin>>in;

    phoneKeyPad(in,out,0,0);

    return 0;

}