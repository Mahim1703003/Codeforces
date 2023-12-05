#include<iostream>
using namespace std;
int main()
{
    int n,i,k=0;
    cin>>n;
    int x[n],h[n],b[n];
    for(i=0;i<=n-1;i++)
        cin>>x[i]>>h[i];
    for(i=0;i<=n-1;i++)
    {
        if(i==0)
        {
            k++;
            b[i]=x[i]-h[i];
        }
        else if(i==n-1)
        {
            k++;
            b[i]=x[i]+h[i];
        }
        else if(x[i]-h[i]>b[i-1]&&x[i]-h[i]>x[i-1])
        {
            k++;
            b[i]=x[i]-h[i];
        }
        else if(x[i]+h[i]<x[i+1])
        {
            k++;
            b[i]=x[i]+h[i];
        }
        else
            b[i]=x[i];
    }
    cout<<k<<endl;
    return 0;
}
