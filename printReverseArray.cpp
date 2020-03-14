// Program to print the reverse array

#include<iostream>
using namespace std;

int main()
{
    int arr[1000];
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;

    cout<<"Enter the elements of the array"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Reversed array"<<endl;
    for(int i = n-1; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}