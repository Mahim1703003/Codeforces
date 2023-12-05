#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,a,b,c,d,diff,rest,div,ans;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(a<=b)
            cout<<b<<"\n";
        else
        {
            if(c>d)
            {
                diff = a - b;
                rest = c - d;
                div = diff / rest;
                if(diff%rest !=0)
                    div++;
                ans = b + div*c;
                cout<<ans<<"\n";
            }
            else
                cout<<"-1\n";
        }
    }
    return 0;
}
