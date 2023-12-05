#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,k=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=1;i<=n-1;i++)
        {
            if(a[i]-a[i-1]>1)
            {
                k++;
                break;
            }
        }
        if(k==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        k = 0;
    }
    return 0;
}
