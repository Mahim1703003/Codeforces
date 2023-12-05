#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j,ct=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]==-1)
            continue;
        ct++;
        for(j=i+1;j<=n-1;j++)
        {
            if(a[j]%a[i]==0)
                a[j] = -1;
        }
    }
    cout<<ct<<endl;
    return 0;
}
