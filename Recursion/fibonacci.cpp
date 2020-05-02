#include<iostream>
using namespace std;

int fibo(int num){
    if(num == 0 || num == 1){
        return num;
    }

    return fibo(num-1)+fibo(num-2);
}

int main(){
    int num;
    
    cin>>num;

    cout<<fibo(num)<<endl;

    return 0;
}