#include<iostream>
using namespace std;

void towerOfHanoi(int n,char source,char helper,char destination){
    
    // base case
    if(n == 0){
        return;
    }
    // recursive case

    towerOfHanoi(n-1,source,destination,helper);
    cout<<"Moving disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    towerOfHanoi(n-1,helper,source,destination);

}


int main(){

    int n;;
    cin>>n;

    towerOfHanoi(n,'A','B','C');

    return 0;
}