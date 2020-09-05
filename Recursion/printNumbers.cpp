#include<iostream>
using namespace std;

void printNumber(int number){
    // base case
    if(number == 0){
        return;
    }
    printNumber(number - 1);
    cout<<number<<endl;
}


int main(){

    int number;
    cin>>number;

    printNumber(number);


    return 0;
}