#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,k,i,d=0,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(i<=k)
                    d = max(d,i);
                if(n/i<=k)
                    d = max(d,n/i);
            }
        }
        ans = n / d;
        cout<<ans<<"\n";
        d = 0;
    }
    return 0;
}
