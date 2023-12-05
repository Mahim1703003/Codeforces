#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,l,h,low,high,i,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l>>h;
            if(i==1)
            {
                low = l;
                high = h;
            }
            else
            {
                if(l>low)
                    low = l;
                if(h<high)
                    high = h;
            }
        }
        if(low<=high)
            ans = 0;
        else
            ans = low - high;
        cout<<ans<<"\n";
    }
    return 0;
}
