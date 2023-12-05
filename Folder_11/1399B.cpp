#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,mina,minb,i,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n],b[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            if(i==0)
                mina = a[i];
            else
                mina = min(mina,a[i]);
        }
        for(i=0;i<=n-1;i++)
        {
            cin>>b[i];
            if(i==0)
                minb = b[i];
            else
                minb = min(minb,b[i]);
        }
        for(i=0;i<=n-1;i++)
            sum = sum + max(a[i]-mina,b[i]-minb);
        cout<<sum<<"\n";
        sum = 0;
    }
    return 0;
}
