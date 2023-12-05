#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,x,zero=0,one=0,ct=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
            cin>>a[i];
        for(i=1;i<=n;i++)
        {
            cin>>x;
            if(x==0)
                zero++;
            else
                one++;
        }
        if(zero!=0&&one!=0)
            cout<<"Yes\n";
        else
        {
            for(i=0;i<=n-2;i++)
            {
                if(a[i]<=a[i+1])
                    ct++;
            }
            if(ct==n-1)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
        zero = 0;
        one = 0;
        ct = 0;
    }
    return 0;
}
