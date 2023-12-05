#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,d;
    long long int k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            if(i==0)
                d = a[i];
            else
                d = max(d,a[i]);
        }
        if(k%2==1)
        {
            for(i=0;i<=n-1;i++)
                a[i] = d - a[i];
        }
        else
        {
            for(i=0;i<=n-1;i++)
                a[i] = d - a[i];
            for(i=0;i<=n-1;i++)
            {
                if(i==0)
                    d = a[i];
                else
                    d = max(d,a[i]);
            }
            for(i=0;i<=n-1;i++)
                a[i] = d - a[i];
        }
        for(i=0;i<=n-1;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
