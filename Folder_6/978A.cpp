#include<iostream>
using namespace std;
int main()
{
    int n,i,j,ct=0;
    cin>>n;
    int a[n];
    for(i=n-1;i>=0;i--)
        cin>>a[i];
    for(i=0;i<=n-1;i++)
    {
        if(a[i]==-1)
            continue;
        for(j=i+1;j<=n-1;j++)
        {
            if(a[i]==a[j])
            {
                ct++;
                a[j]=-1;
            }
        }
    }
    cout<<n-ct<<endl;
    for(i=n-1;i>=0;i--)
    {
        if(a[i]!=-1)
            cout<<a[i]<<" ";
    }
    return 0;
}
