#include<iostream>
using namespace std;


int sumOfArray(int *arr,int len){
    if(len == 0){
        return 0;
    }
    return arr[0] + sumOfArray(arr+1, len-1);
}

int main(){

    int arr[] = {1,3,4,9,10,115,19};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout<<"Sum of array is "<<sumOfArray(arr,len)<<endl;
    return 0;
}