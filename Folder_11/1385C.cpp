#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,ct=1,max_length=0,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
            cin>>a[i];
        i = n - 1;
        while(i!=0)
        {
            if(a[i]<=a[i-1])
                ct++;
            else
                break;
            i--;
        }
        if(i!=0)
        {
            i--;
            ct++;
        }
        while(i!=0)
        {
            if(a[i]>=a[i-1])
                ct++;
            else
                break;
            i--;
        }
        ans = n - ct;
        cout<<ans<<"\n";
        ct = 1;
    }
    return 0;
}
