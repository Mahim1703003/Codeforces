#include<iostream>
using namespace std;
int main()
{
    int n,ct1=0,ct2=0,i,x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x==1)
            ct1++;
        else
            ct2++;
    }
    if(ct2>=ct1)
        cout<<ct1<<endl;
    else
    {
        ct1 = ct1 - ct2;
        x = ct1 / 3;
        cout<<ct2+x<<endl;
    }
    return 0;
}
