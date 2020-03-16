#include<iostream>
using namespace std;

long long int product(int arr[] , int length)
{
    long long int productOfArray = 1;
    for(int i = 0; i < length; i++)
    {
        productOfArray = productOfArray*arr[i];
    }

    return productOfArray;
}


int main()
{
    int arr[] = {5,7,9,5,8,3,6,4,8,12,55,98,17};

    int length = sizeof(arr)/sizeof(arr[0]);

    cout<<"Product of array : "<<product(arr,length)<<endl;

    return 0;
}