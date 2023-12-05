#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,x;
    cin>>n;
    int a[n+1],b[n+1],c[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        b[a[i]] = i;
    }
    for(i=1;i<=n;i++)
        cin>>c[i];
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            cout<<b[c[i]]<<" ";
            x = b[c[i]];
        }
        else
        {
            if(b[c[i]]<=x)
                cout<<"0 ";
            else
            {
                cout<<b[c[i]] - x<<" ";
                x = b[c[i]];
            }
        }
    }
    cout<<"\n";
    return 0;
}
