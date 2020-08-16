#include <iostream>
using namespace std;

void printNumber(int number){
	if(number == 0){
		return;
	}
	printNumber(number - 1);
	cout<<number<<" ";
}


int main(){

	int number;
	cin>>number;

	printNumber(number);


	return 0;
}
