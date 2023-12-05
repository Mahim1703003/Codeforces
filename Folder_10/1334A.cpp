#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,k=0,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],b[n];
        for(i=0;i<=n-1;i++)
            cin>>a[i]>>b[i];
        for(i=0;i<=n-1;i++)
        {
            if(i==0)
            {
                if(a[i]>=b[i])
                {
                    k++;
                    continue;
                }
                else
                    break;
            }
            if(a[i]==a[i-1])
            {
                if(b[i]==b[i-1])
                    k++;
                else
                    break;
            }
            else if(a[i]>a[i-1])
            {
                d = a[i] - a[i-1];
                if(b[i]>=b[i-1]&&b[i]<=b[i-1]+d)
                    k++;
                else
                    break;
            }
            else
                break;
        }
        if(k==n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        k = 0;
    }
    return 0;
}
