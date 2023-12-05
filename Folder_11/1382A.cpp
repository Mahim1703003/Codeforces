#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> number;
    int t,n,m,x,ans=-1;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        while(n--)
        {
            cin>>x;
            number[x]++;
        }
        while(m--)
        {
            cin>>x;
            if(number[x]!=0)
                ans = x;
        }
        if(ans==-1)
            cout<<"NO\n";
        else
            cout<<"YES\n"<<"1 "<<ans<<"\n";
        ans = -1;
        number.clear();
    }
    return 0;
}
