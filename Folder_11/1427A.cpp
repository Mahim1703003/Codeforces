#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            sum = sum + a[i];
        }
        if(sum==0)
            cout<<"NO\n";
        else
        {
            if(sum>0)
                sort(a,a+n,greater<int>());
            else
                sort(a,a+n);
            cout<<"YES\n";
            for(i=0;i<=n-1;i++)
                cout<<a[i]<<" ";
            cout<<"\n";
        }
        sum = 0;
    }
    return 0;
}
