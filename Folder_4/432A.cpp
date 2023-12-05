#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,k,i,j,ct=0,t;
    cin>>n>>k;
    t=n/3;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0,j=1;j<=t;i=i+3,j++)
    {
        if(a[i]+k<=5&&a[i+1]+k<=5&&a[i+2]+k<=5)
            ct++;
    }
    cout<<ct<<endl;
    return 0;
}
