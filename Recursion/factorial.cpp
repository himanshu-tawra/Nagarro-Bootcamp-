#include<iostream>
using namespace std;

int fact(int num){
    // base case
    
    if(num == 1 || num == 0){
        return num;
    }


    //recursive case
    return num*fact(num-1);

}

int main(){

    int num;
    cin>>num;


    cout<<fact(num)<<endl;

    return 0;
}