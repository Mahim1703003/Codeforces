#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map <int,int> deleted;

    int n,laces,i,j,l,a,b,ct=0,ans=0,adj_node;
    cin>>n>>laces;

    vector <int> v[n+1],v2;

    for(i=1;i<=laces;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    while(1)
    {
        for(i=1;i<=n;i++)
        {
            if(deleted[i]==0)
            {
                l = v[i].size();
                for(j=0;j<=l-1;j++)
                {
                    adj_node = v[i][j];
                    if(deleted[adj_node]==0)
                        ct++;
                }
                if(ct==1)
                    v2.push_back(i);
                ct = 0;
            }
        }
        if(v2.size()==0)
            break;
        else
        {
            ans++;
            for(j=0;j<=v2.size()-1;j++)
                deleted[v2[j]]++;
            v2.clear();
        }
    }

    cout<<ans<<"\n";
    return 0;
}
