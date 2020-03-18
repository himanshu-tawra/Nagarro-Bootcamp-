// Array rotation using reversal alogithm

#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}


void reverse(int arr[] , int i,int j)
{
    while(i < j)
    {
        swap(&arr[i],&arr[j]);
        i++;
        j--;
    }
}

void rotateArray(int arr[] , int len, int d)
{
    reverse(arr,0,len-1);
    reverse(arr,0,d-1);
    reverse(arr,d,len-1);
}

void printArray(int arr[] , int len)
{
    for(int i = 0; i < len; i++)
    {
        cout<<arr[i] << " ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int len = sizeof(arr)/sizeof(arr[0]);

    int d = 3; // rotating array by d 
    printArray(arr,len);



    rotateArray(arr,len,d);
    
    printArray(arr,len);
    
    return 0;

}