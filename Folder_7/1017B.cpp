#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string sa,sb;
    long long int n,i,a=0,b=0,c=0,d=0;
    long long int ans;
    cin>>n>>sa>>sb;
    for(i=0;i<=n-1;i++)
    {
        if(sa[i]=='0'&&sb[i]=='0')
            a++;
        else if(sa[i]=='1'&&sb[i]=='0')
            b++;
        else if(sa[i]=='1'&&sb[i]=='1')
            c++;
        if(sa[i]=='0'&&sb[i]=='1')
            d++;
    }
    ans = a*b + a*c + d*b;
    cout<<ans<<"\n";
    return 0;
}
