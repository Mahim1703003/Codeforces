#include<iostream>
using namespace std;
int main()
{
    int n,ct1=0,ct2=0,i,s=0,max=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            ct1++;
        else
            ct2++;
    }
    if(ct2==0)
        cout<<"0\n";
    else{
    for(i=0;i<=n-2;i++)
    {
        if(a[i]==0 && a[i+1]==0)
            s++;
        else
        {
            if(s>max)
                max = s;
            s = 0;
        }
    }
    if(s>max)
        max = s;
    cout<<ct1 + max + 1<<endl;
    }
    return 0;
}
