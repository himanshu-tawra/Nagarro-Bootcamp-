#include<iostream>
using namespace std;

int fibo(int num){
	if(num == 0 || num == 1){
		return num;
	}

	int smallProblem = fibo(num-2);
	int bigProblem = fibo(num-1)+smallProblem;
	return bigProblem;


}


int main(){

	int num;
	cin>>num;

	cout<<fibo(num)<<endl;

	return 0;
}