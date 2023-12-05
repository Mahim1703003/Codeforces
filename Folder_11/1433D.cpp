#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v;
    int t,n,i,j,g;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(i==1)
            {
                g = a[i];
                v.push_back(i);
            }
            else if(g==a[i])
                v.push_back(i);
        }
        if(v.size()==n)
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            for(i=0;i<=v.size()-1;i++)
            {
                if(i==0)
                {
                    for(j=1;j<=n;j++)
                    {
                        if(g!=a[j])
                            cout<<v[i]<<" "<<j<<"\n";
                    }
                }
                else
                {
                    for(j=1;j<=n;j++)
                    {
                        if(g!=a[j])
                        {
                            cout<<v[i]<<" "<<j<<"\n";
                            break;
                        }
                    }
                }
            }
        }
        v.clear();
    }
    return 0;
}
