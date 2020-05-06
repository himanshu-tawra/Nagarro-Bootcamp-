// Time Complexity: O(2^n)

#include<iostream>
using namespace std;

int nStaris(int n,int k){
    if(n == 0){
        return 1;
    }
    if(n < 0){
        return 0;
    }

    int ans = 0;
    for(int i = 1; i <= k; i++){
        ans+=nStaris(n-i,k);
    }
    return ans;
}

int main(){

    int n;
    cout<<"Enter the number of stairs "<<endl;
    cin>>n;
    int k;
    cout<<"Enter the maximum number of steps "<<endl;
    cin>>k;

    cout<<nStaris(n,k)<<endl;

    return 0;
}