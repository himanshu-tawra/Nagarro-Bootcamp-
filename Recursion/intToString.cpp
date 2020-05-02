#include<iostream>
using namespace std;


char ch[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void intToChar(int num){
    if(num == 0){
        return;
    }

    intToChar(num/10);
    cout<<ch[num%10]<<endl;

}

int main(){

    cout<<"Enter a number"<<endl;
    int num;
    cin>>num;

    intToChar(num);
    return 0;
}