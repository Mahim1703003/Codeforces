#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,m,k,i,mi;
    bool finished = false;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        int a[n+1];
        for(i=1;i<=n;i++)
            cin>>a[i];
        for(i=1;i<=n-1;i++)
        {
            if(a[i]>=a[i+1])
                m = m + (a[i]-max(0,a[i+1]-k));
            else
            {
                mi = max(0,a[i+1]-k);
                if(a[i]>=mi)
                    m = m + (a[i]-mi);
                else
                {
                    if(m>=mi-a[i])
                        m = m - (mi-a[i]);
                    else
                    {
                        finished = true;
                        break;
                    }
                }
            }
        }
        if(finished)
            cout<<"NO\n";
        else
            cout<<"YES\n";
        finished = false;
    }
    return 0;
}
