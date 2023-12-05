#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    int n,h,k,i,x;
    cin>>n>>h>>k;
    while(h--)
    {
        cin>>x;
        m[x]++;
    }
    int u[k],v[k];
    for(i=0;i<=k-1;i++)
        cin>>u[i]>>v[i];
    x = 1;
    if(m[x]==1)
    {
        cout<<x<<"\n";
        return 0;
    }
    else
    {
        for(i=0;i<=k-1;i++)
        {
            if(x==u[i])
                x = v[i];
            else if(x==v[i])
                x = u[i];
            if(m[x]==1)
            {
                cout<<x<<"\n";
                return 0;
            }
        }
        cout<<x<<"\n";
    }
    return 0;
}
