// print array using function

#include<iostream>
using namespace std;

void printArray(int arr[] , int length)
{
    for(int i = 0; i < length; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    int length = sizeof(arr)/sizeof(arr[0]);

    printArray(arr,length);

    return 0;
}