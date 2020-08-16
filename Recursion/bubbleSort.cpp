#include <iostream>
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


int main(){

	int arr[] = {10,8,25,4,6,1};
	int len = sizeof(arr)/sizeof(arr[0]);

	bubbleSort(arr,len,0);
	cout<<"After bubble sort"<<endl;

	for(int i = 0; i < len; i++){
		cout<<arr[i]<<" ";
	}
	



	return 0;
}