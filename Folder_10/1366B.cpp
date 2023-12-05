#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,x,m,l,r,i,low=-1,up=-1,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>m;
        for(i=1;i<=m;i++)
        {
            cin>>l>>r;
            if(low==-1&&up==-1)
            {
                if(x>=l&&x<=r)
                {
                    low = l;
                    up = r;
                }
            }
            else
            {
                if(r<low||l>up){
                    ///nothing happens;
                }
                else
                {
                    low = min(l,low);
                    up = max(up,r);
                }
            }
        }
        if(low==-1&&up==-1)
            cout<<"1\n";
        else
        {
            ans = up - low + 1;
            cout<<ans<<"\n";
        }
        low = -1;
        up = -1;
    }
    return 0;
}
