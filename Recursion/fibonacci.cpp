#include<iostream>
using namespace std;

int fibonacci(int number){

    // base case
    if(number == 0 || number == 1){
        return number;
    }

    // recursive case

    return fibonacci(number - 1)+fibonacci(number - 2);
}


int main(){

    int number;
    cin>>number;

    int fibo = fibonacci(number);

    cout<<number<<"th fibonacci number : "<<fibo<<endl;


    return 0;
}