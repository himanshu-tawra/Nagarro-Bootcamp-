#include<iostream>
using namespace std;

int eWays(int n,int m){

    if(n == 0 && m == 0){
        return 1;
    }

    int ans = 0;
    for(int k = 0; k < n; k++){
        ans+=eWays(k,m);
    }
    for(int k = 0; k < m; k++){
        ans+= eWays(n,k);
    }
    return ans;
}

int main(){

    int n,m;
    cout<<"Enter number of rows and columns"<<endl;
    cin>>n>>m;

    cout<<"Total number of ways "<<eWays(n,m)<<endl;


    return 0;
}