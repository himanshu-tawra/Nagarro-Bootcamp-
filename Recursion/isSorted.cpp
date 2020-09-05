#include<iostream>
using namespace std;

bool isSorted(int *arr,int len){
    // base case
    if(len == 0 || len == 1){
        return true;
    }

    //recursive case
    if(arr[len - 1] < arr[len - 2]){
        return false;
    }

    return isSorted(arr,len-1);

}


int main(){

    int arr[] = {1,2,3,4,52,6,7,8,9};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    bool result = isSorted(arr,arrSize);

    if(result){
        cout<<"Given array is sorted "<<endl;
    }
    else{
        cout<<"Given array is not sorted"<<endl;
    }


    return 0;
}