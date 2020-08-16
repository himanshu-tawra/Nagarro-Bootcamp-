#include<iostream>
using namespace std;

bool isSorted(int *arr,int size){
	if(size == 0 || size == 1){
		return true;
	}

	if(arr[size - 1] < arr[size- 2]){
		return false;
	}

	return isSorted(arr,size-1);

}


int main(){

	int arr[] = {1,2,5,6,7,10,14,15};
	int len = sizeof(arr)/sizeof(arr[0]);

	if(isSorted(arr,len)){
		cout<<"Sorted"<<endl;
	}
	else{
		cout<<"Not sorted"<<endl;
	}


	return 0;
}