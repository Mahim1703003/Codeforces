#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,m,i,j,sum1=0,sum2=0,ct=0;
    cin>>n>>m;
    int a[n],b[m];

    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=m-1;i++)
        cin>>b[i];

    i = 0;
    j = 0;
    sum1 = sum1 + a[i];
    sum2 = sum2 + b[j];
    while(1)
    {
        if(sum1==sum2)
        {
            ct++;
            i++;
            j++;
            sum1 = sum1 + a[i];
            sum2 = sum2 + b[j];
        }
        else if(sum1<sum2)
        {
            i++;
            sum1 = sum1 + a[i];
        }
        else
        {
            j++;
            sum2 = sum2 + b[j];
        }
        if(i>n-1 || j>m-1)
            break;
    }
    cout<<ct<<"\n";
    return 0;
}
