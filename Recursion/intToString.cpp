#include<iostream>
using namespace std;

char arr[][10] = {
    "zero","one","two","three","four","five","six","seven","eight","nine"

};

void integerToString(int number){
    if(number == 0){
        return;
    }

    int digit = number%10;
    number /= 10;
    integerToString(number);
    cout<<arr[digit]<<endl;
}


int main(){

    int number;
    cin>>number;

    integerToString(number);

    return 0;
}