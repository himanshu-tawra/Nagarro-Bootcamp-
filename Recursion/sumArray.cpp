#include <iostream>
using namespace std;

int sumArray(int *arr,int len){
	if(len == 0){
		return 0;
	}
	return sumArray(arr,len-1) + arr[len-1];
}


int main(){

	int arr[] = {1,5,3,4,8,12,10,21};

	int len = sizeof(arr)/sizeof(arr[0]);

	cout<<"Sum of array : "<<sumArray(arr,len)<<endl;

	return 0;
}