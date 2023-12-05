#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,m,i,g=0,in=-1;
    cin>>n>>m;
    long long int x[n],p[m+1];
    for(i=0;i<=n-1;i++)
    {
        cin>>x[i];
        if(i!=0)
            g = __gcd(g,x[i]-x[0]);
    }
    for(i=1;i<=m;i++)
    {
        cin>>p[i];
        if(g%p[i]==0)
            in = i;
    }
    if(in==-1)
        cout<<"NO\n";
    else
        cout<<"YES\n"<<x[0]<<" "<<in<<"\n";
    return 0;
}
