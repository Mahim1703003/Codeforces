#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,x,even=0,odd=0,a,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        for(i=1;i<=n;i++)
        {
            cin>>a;
            if(a%2==0)
                even++;
            else
                odd++;
        }
        if(odd==0)
        {
            cout<<"No\n";
            even = 0;
            odd = 0;
            continue;
        }
        if(x%2==1)
        {
            if(odd>=x)
                cout<<"Yes\n";
            else
            {
                if(odd%2==0)
                    odd--;
                if(even>=x-odd)
                    cout<<"Yes\n";
                else
                    cout<<"No\n";
            }
        }
        else
        {
            if(odd>=x)
            {
                if(even>=1)
                    cout<<"Yes\n";
                else
                    cout<<"No\n";
            }
            else
            {
                if(odd%2==0)
                    odd--;
                if(even>=x-odd)
                    cout<<"Yes\n";
                else
                    cout<<"No\n";
            }
        }
        even = 0;
        odd = 0;
    }
    return 0;
}

