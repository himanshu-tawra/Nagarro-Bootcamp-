// Check Prime

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;

    int i = 2;
    while(i < num)
    {
        if(num % i == 0)
        {
            cout<<"Not Prime"<<endl;
            return 0;
        }
        i = i + 1;
    }

    if(i == num)
    {
        cout<<num<< " is a prime number"<<endl;
    }



    return 0;
}
