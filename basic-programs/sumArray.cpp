// Sum of array using function

#include<iostream>
using namespace std;

int arraySum(int arr[] , int length)
{
    int sum = 0;

    for(int i = 0; i < length; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int length = sizeof(arr)/sizeof(arr[0]);

    cout<<"Sum of array : "<<arraySum(arr,length)<<endl;

    return 0;
}