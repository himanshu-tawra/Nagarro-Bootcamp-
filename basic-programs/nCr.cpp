// factorial using function

#include<iostream>
using namespace std;

int fact(int num)
{
    int factorial = 1;

    for(int i = num; i >= 1; i-- )
    {
        factorial = factorial * i;
    }
    return factorial;
}


int ncr(int n,int r)
{
    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_nr = fact(n-r);

    int ans = fact_n/(fact_r*fact_nr);

    return ans;
}

int main()
{
    cout<<"Enter the value of 'n'"<<endl;
    int n;
    cin>>n;

    cout<<"Enter the value of r"<<endl;

    int r;
    cin>>r;

    cout<<"nCr : "<<ncr(n,r)<<endl;

    return 0;
}