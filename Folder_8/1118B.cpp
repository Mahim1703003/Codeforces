#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,even_sum=0,odd_sum=0,ct=0;
    cin>>n;
    int a[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i%2==1)
            even_sum = even_sum + a[i];
        else
            odd_sum = odd_sum + a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            even_sum = even_sum - a[i];
            if(even_sum==odd_sum)
                ct++;
        }
        else
        {
            if(i%2==0)
                odd_sum = odd_sum - a[i] + a[i-1];
            else
                even_sum = even_sum - a[i] + a[i-1];
            if(even_sum==odd_sum)
                ct++;
        }
    }
    cout<<ct<<"\n";
    return 0;
}
