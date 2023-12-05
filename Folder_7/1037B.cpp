#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,s,i,m,sum=0;
    cin>>n>>s;
    long long int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    m = n / 2;
    if(s>a[m])
    {
        for(i=m;i<=n-1;i++)
        {
            if(s>a[i])
                sum = sum + (s-a[i]);
            else
                break;
        }
        cout<<sum<<"\n";
    }
    else if(s<a[m])
    {
        for(i=m;i>=0;i--)
        {
            if(s<a[i])
                sum = sum + (a[i]-s);
            else
                break;
        }
        cout<<sum<<"\n";
    }
    else
        cout<<sum<<"\n";
    return 0;
}
