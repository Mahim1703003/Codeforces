#include<iostream>
using namespace std;
int main()
{
    int n,i,x,y,k=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i]>>b[i];
        if(i==0)
        {
            x = a[i];
            y = b[i];
        }
        else
        {
            if(a[i]<x)
                x = a[i];
            if(b[i]>y)
                y = b[i];
        }
    }
    for(i=0;i<=n-1;i++)
    {
        if(x==a[i] && y==b[i])
        {
            cout<<i+1<<endl;
            k++;
            break;
        }
    }
    if(k==0)
        cout<<"-1\n";

    return 0;
}
