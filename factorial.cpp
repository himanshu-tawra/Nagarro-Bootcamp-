// factorial using function

#include<iostream>
using namespace std;

void fact(int num)
{
    int factorial = 1;

    for(int i = num; i >= 1; i-- )s
    {
        factorial = factorial * i;
    }
    cout<<"Factorial of "<<num<<" : "<<factorial<<endl;
}


int main()
{
    cout<<"Enter a number"<<endl;
    int num;
    cin>>num;

    fact(num);

    return 0;
}