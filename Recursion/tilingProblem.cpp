/*

Tiling Problem

Given a “2 x n” board and tiles of size “2 x 1”, 

count the number of ways to tile the given board using the 2 x 1 tiles. 

A tile can either be placed horizontally i.e., as a 1 x 2 tile or vertically i.e., as 2 x 1 tile.

*/



#include<iostream>
using namespace std;

int noOfWays(int n){

    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }

    return noOfWays(n-1) + noOfWays(n-2);
}

int main(){

    int n = 4;  //number of tiles
    
    cout<<noOfWays(n)<<endl;

    return 0;
}