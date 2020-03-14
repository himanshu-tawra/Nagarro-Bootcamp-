// swapping using call by reference

#include<iostream>
using namespace std;

void swap(int &x,int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 10;
    int b = 20;

    cout<<"Before swapping "<<"a = "<<a<<" and b = "<<b<<endl;

    swap(a,b);

    cout<<"After swapping"<<"a = "<<a<<" and b = "<<b<<endl;

    return 0;
}