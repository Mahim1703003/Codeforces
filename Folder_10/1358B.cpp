#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,sum=1,ct=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=0;i<=n-1;i++)
        {
            if(sum+ct>=a[i])
            {
                sum = sum + ct;
                sum++;
                ct = 0;
            }
            else
                ct++;
        }
        cout<<sum<<"\n";
        sum = 1;
        ct = 0;
    }
    return 0;
}
