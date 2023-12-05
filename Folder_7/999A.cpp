#include<iostream>
using namespace std;
int main()
{
    int n,k,i,j,ct=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    i = 0;
    j = n-1;
    while(i<=j)
    {
        if(a[i]<=k || a[j]<=k)
        {
            if(a[i]<=k)
            {
                ct++;
                i++;
            }
            if(a[j]<=k && (i-1)!=j)
            {
                ct++;
                j--;
            }
        }
        else
            break;
    }
    cout<<ct<<endl;
    return 0;
}
