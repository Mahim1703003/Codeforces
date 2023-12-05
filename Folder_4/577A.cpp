#include<iostream>
using namespace std;
int main()
{
    long long int n,k,i,ct=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        if(k%i==0&&i*n>=k)
            ct++;
    }
    cout<<ct<<endl;
    return 0;
}
