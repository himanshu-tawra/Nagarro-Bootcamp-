#include <iostream>
using namespace std;

void printReverse(int number){
	if(number == 0){
		return;
	}
	cout<<number<<" ";
	printReverse(number - 1);
}

int main(){

	int number;
	cin>>number;

	printReverse(number);


	return 0;
}