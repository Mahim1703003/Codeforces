#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,j,k,f1=0,f2=0,f3=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=1;i<=n;i++)
            cin>>a[i];
        for(k=2;k<=n-1;k++)
        {
            for(i=k-1;i>=1;i--)
            {
                if(a[i]<a[k])
                {
                    f1++;
                    break;
                }
            }
            for(j=k+1;j<=n;j++)
            {
                if(a[k]>a[j])
                {
                    f2++;
                    break;
                }
            }
            if(f1!=0&&f2!=0)
            {
                f3++;
                cout<<"YES\n";
                cout<<i<<" "<<k<<" "<<j<<"\n";
                break;
            }
            f1 = 0;
            f2 = 0;
        }
        if(f3==0)
            cout<<"NO\n";
        f1 = 0;
        f2 = 0;
        f3 = 0;
    }
    return 0;
}
