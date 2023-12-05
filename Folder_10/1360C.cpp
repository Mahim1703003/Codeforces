#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    vector <int> even;
    int t,n,i,k=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            m[a[i]]++;
            if(a[i]%2==0)
                even.push_back(a[i]);
        }
        if(even.size()%2==0)
            cout<<"YES\n";
        else
        {
            for(i=0;i<=even.size()-1;i++)
            {
                if(m[even[i]+1]!=0 || m[even[i]-1]!=0)
                {
                    k++;
                    break;
                }
            }
            if(k!=0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        k = 0;
        even.clear();
        m.clear();
    }
    return 0;
}
