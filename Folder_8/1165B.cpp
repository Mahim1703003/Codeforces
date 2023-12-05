#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,no_of_problem=1,ct=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<=n-1;i++)
    {
        if(no_of_problem<=a[i])
        {
            ct++;
            no_of_problem++;
        }
    }
    cout<<ct<<endl;
    return 0;
}
