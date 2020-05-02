#include<iostream>
using namespace std;

void bubbleSort(int *arr,int len,int i){
    if(i == len-1){
        return;
    }

    for(int j = 0; j < len - 1 - i; j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    bubbleSort(arr,len,i+1);
}

void printArray(int *arr,int len){
    for(int i = 0; i < len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {1,3,4,9,10,115,19};
    int len = sizeof(arr)/sizeof(arr[0]);

    printArray(arr,len);
    bubbleSort(arr,len,0);
    printArray(arr,len);
    return 0;
}