#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n,m,i,k=2;
    cin>>n;
    m = n - 1;
    int a[m],b[n],c[n+1];
    memset(c,0,sizeof(c));
    for(i=0;i<=m-1;i++)
        cin>>a[i];
    if(a[0]>=0)
    {
        b[0] = 1;
        b[1] = a[0] + b[0];
    }
    else if(a[0]<0)
    {
        b[1] = 1;
        b[0] = (-1*a[0]) + b[1];
    }
    c[b[0]]++;
    c[b[1]]++;
    for(i=1;i<=m-1;i++)
    {
        b[k] = a[i] + b[k-1];
        c[b[k]]++;
        k++;
    }
    k=0;
    for(i=1;i<=n;i++)
    {
        if(c[i]==1)
            k++;
    }
    if(k==n)
    {
        for(i=0;i<=n-1;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
    else
    {
        memset(c,0,sizeof(c));
        k = n-3;
        if(a[m-1]>=0)
        {
            b[n-1] = n;
            b[n-2] = b[n-1] - a[m-1];
        }
        else if(a[m-1]<0)
        {
            b[n-1] = 1;
            b[n-2] = (-1*a[m-1]) + b[n-1];
        }
        c[b[n-1]]++;
        c[b[n-2]]++;
        for(i=m-2;i>=0;i--)
        {
            if(a[i]>=0)
                b[k] = b[k+1] - a[i];
            else
                b[k] = (-1*a[i]) + b[k+1];
            c[b[k]]++;
            k--;
        }
        k=0;
        for(i=1;i<=n;i++)
        {
        if(c[i]==1)
            k++;
        }
        if(k==n)
        {
        for(i=0;i<=n-1;i++)
            cout<<b[i]<<" ";
        cout<<endl;
        }
        else
            cout<<"-1\n";
    }
    return 0;
}
