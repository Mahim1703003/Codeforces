#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    int n,k,i,x,y;
    cin>>n>>k;
    for(i=1;i<=k;i++)
    {
        cin>>x>>y;
        m[x]++;
        m[y]++;
    }
    for(i=1;i<=n;i++)
    {
        if(m[i]==0)
        {
            x = i;
            break;
        }
    }
    cout<<n-1<<"\n";
    for(i=1;i<=n;i++)
    {
        if(i==x)
            continue;
        cout<<x<<" "<<i<<"\n";
    }
    return 0;
}
