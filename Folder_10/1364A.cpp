#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,x,k=0,sum=0,len1,len2,i,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        long long int a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            sum = sum + a[i];
            if(a[i]%x!=0)
                k++;
        }
        if(sum%x!=0)
            cout<<n<<"\n";
        else
        {
            if(k==0)
                cout<<"-1\n";
            else
            {
                for(i=1;i<=n;i++)
                {
                    if(a[i]%x!=0)
                    {
                        len1 = n - i;
                        break;
                    }
                }
                for(i=n;i>=1;i--)
                {
                    if(a[i]%x!=0)
                    {
                        len2 = i - 1;
                        break;
                    }
                }
                ans = max(len1,len2);
                cout<<ans<<"\n";
            }
        }
        sum = 0;
        k = 0;
    }
    return 0;
}
