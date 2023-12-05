#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,j,in,mi=1e6,ma=0,ct=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(a[i]<mi)
        {
            mi = a[i];
            in = i;
        }
        b[i] = a[i];
    }
    sort(b,b+n);
    for(i=in,j=0;j<=n-1;i=(i+1)%n,j++)
    {
        if(a[i]==b[j])
            ct++;
    }
    if(ct==n)
        cout<<(n-in)%n<<"\n";
    else
    {
        for(i=0;i<=n-1;i++)
        {
            if(a[i]>=ma)
            {
                ma = a[i];
                in = i;
            }
        }
        in = (in+1)%n;
        ct = 0;
        for(i=in,j=0;j<=n-1;i=(i+1)%n,j++)
        {
            if(a[i]==b[j])
                ct++;
        }
        if(ct==n)
            cout<<(n-in)%n<<"\n";
        else
            cout<<"-1\n";
    }
    return 0;
}
