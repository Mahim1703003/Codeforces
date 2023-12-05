#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,k,d,ct=1;
    cin>>n>>k;
    n--;
    d = pow(2.0,n*1.0);
    if(k>d)
        k = k - d;
    while(k%2==0)
    {
        ct++;
        k = k / 2;
    }
    cout<<ct<<"\n";
    return 0;
}
