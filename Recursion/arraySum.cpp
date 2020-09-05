#include<iostream>
using namespace std;

int arraySum(int *arr,int len){
    if(len == 0){
        return 0;
    }

    int sum = arr[len - 1];

    return arraySum(arr,len-1) + sum;
}


int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int len = sizeof(arr)/sizeof(arr[0]);

    int sum = arraySum(arr,len);


    cout<<"Sum of array : "<<sum<<endl;

    return 0;
}