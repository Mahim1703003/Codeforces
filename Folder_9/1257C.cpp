#include<iostream>
#include<map>
#include<cstring>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    int t,n,i,x,len=1e6,position[200001];
    memset(position,0,sizeof(position));
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            m[x]++;
            if(m[x]==2)
            {
                len = min(i-position[x]+1,len);
                position[x] = i;
                m[x]--;
            }
            else
                position[x] = i;
        }
        if(len==1e6)
            cout<<"-1\n";
        else
            cout<<len<<"\n";
        len = 1e6;
        m.clear();
        memset(position,0,sizeof(position));
    }
    return 0;
}
