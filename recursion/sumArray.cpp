#include<iostream>
using namespace std;

int arraySum(int arr[] , int length,int i)
{
    if(i == length)
    {
        return 0;
    }
    return arraySum(arr,length,i+1) + arr[i];
}


int main()
{
    int arr[] = {8,10,21,78,45,69,32,52,55};
    int length = sizeof(arr)/sizeof(arr[0]);

    cout<<"Sum of array : "<<arraySum(arr,length,0)<<endl; 



    return 0;
}