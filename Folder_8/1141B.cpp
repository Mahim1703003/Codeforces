#include<iostream>
using namespace std;
int main()
{
    int n,i,in,k=0,ma=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(a[i]==0)
            in = i;
    }
    for(i=(in+1)%n; ;i=(i+1)%n)
    {
        if(a[i]==1)
            k++;
        else
        {
            if(k>ma)
                ma = k;
            k = 0;
        }
        if(i==in)
            break;
    }
    cout<<ma<<endl;
    return 0;
}
