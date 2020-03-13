// Program to count the set bits in a number

#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter a number"<<endl;
    cin>>num;

    int counter = 0;

    while(num > 0)
    {
        if((num & 1) == 1)
        {
            counter++;
        }
        num = num>>1;
    }
    cout<<counter<<endl;

    return 0;
}