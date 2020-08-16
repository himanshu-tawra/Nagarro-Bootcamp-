#include<iostream>
using namespace std;

bool binarySearch(int *arr,int low,int high,int key){
	if(low > high){
		return false;
	}
	int mid = (low+high)/2;
	if(arr[mid] == key){
		return true;
	}
	else if(arr[mid] < key){
		return binarySearch(arr,mid+1,high,key);
	}
	else{
		return binarySearch(arr,low,mid-1,key);
	}
}


int main(){

	int arr[] = {1,3,5,9,10,13,21,25};
	int len = sizeof(arr)/sizeof(arr[0]);

	int key;
	cin>>key;

	if(binarySearch(arr,0,len-1,key)){
		cout<<"Key found"<<endl;
	}
	else{
		cout<<"Key not found"<<endl;
	}


	return 0;
}