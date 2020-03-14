#include<iostream>
using namespace std;

bool isSorted(int *arr , int n)
{
    if(n == 0 || n == 1)
    {
        return true;
    } 
    bool isSmallArraySorted = isSorted(arr+1,n-1);
    if((isSmallArraySorted && arr[0] < arr[1]) == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a[]={1,3,4,5,6,7,8,9};
	int n = sizeof(a)/sizeof(int);

    if(isSorted(a,n) == true)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }

    return 0;
}