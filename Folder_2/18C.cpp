#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,i,left=0,right=0,ct=0;
    cin>>n;
    long long int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        right = right + a[i];
    }
    for(i=0;i<=n-2;i++)
    {
        left = left + a[i];
        right = right - a[i];
        if(left==right)
            ct++;
    }
    cout<<ct<<"\n";
    return 0;
}
