#include <iostream>
using namespace std;


char x[][10] = {
	"zero","one","two","three","four","five","six","seven","eight","nine"
};

void intToString(int number){
	if(number == 0){
		return;
	}
	intToString(number/10);
	cout<<x[number%10]<<endl;

}


int main(){

	int number;
	cin>>number;

	intToString(number);

	return 0;
}