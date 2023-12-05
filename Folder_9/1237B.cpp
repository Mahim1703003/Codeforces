#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,x,s,k=0;
    cin>>n;
    int a[n+1],b[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>x;
        a[x] = i;
    }
    for(i=1;i<=n;i++)
    {
        cin>>b[i];
        b[i] = a[b[i]];
    }
    for(i=n;i>=1;i--)
    {
        if(i==n)
            s = b[i];
        else
        {
            if(b[i]>s)
                k++;
            s = min(s,b[i]);
        }
    }
    cout<<k<<"\n";
    return 0;
}
