//PairSum

#include<iostream>
using namespace std;

void pairSum(int arr[] , int sum,int length)
{
    for(int i = 0; i < length; i++)
    {
        int num1 = arr[i];
        int num2 = sum - num1;
        for(int j = i+1 ; j < length; j++)
        {
            if(arr[j] == num2)
            {
                cout<<"("<<num1<<" , "<<num2<<")"<<endl;
            }
        }
    }
}

int main()
{
    int arr[]={1,4,5,8,9,0};
	int length = sizeof(arr)/sizeof(int);
	int sum = 9;

    pairSum(arr,sum,length);


    return 0;
}