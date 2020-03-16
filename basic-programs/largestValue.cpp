// Program to find the largest value in the array

#include<iostream>
using namespace std;

int main()
{   
    int arr[100];
    int n;

    cout<<"Enter the size of array"<<endl;
    cin>>n;

    int largest = INT32_MIN;

    cout<<"Enter the elements of the array"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout<<"Largest value: "<<largest<<endl;



    return 0;
}