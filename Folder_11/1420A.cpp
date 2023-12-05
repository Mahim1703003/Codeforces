#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    int t,n,k=0,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        for(i=0;i<=n-2;i++)
        {
            if(a[i]>=a[i+1])
                continue;
            else
            {
                k++;
                break;
            }
        }
        if(k==0)
        {
            if(m.size()==n)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
        else
            cout<<"YES\n";
        k = 0;
        m.clear();
    }
    return 0;
}
