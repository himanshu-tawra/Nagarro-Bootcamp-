/*
    Problem : WAP to find the factorial of a given number using recursion.
*/

#include<iostream>
using namespace std;

int factorial(int number){
    // base case

    if(number == 1){
        return 1;
    }
    // recursive case
    return number*factorial(number-1);

}


int main(){

    int number;
    cin>>number;

    int fact = factorial(number);
    cout<<"Factorial of "<<number <<" : "<<fact<<endl;


    return 0;

}