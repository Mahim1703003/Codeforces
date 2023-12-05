#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    queue <int> q;
    map <int,int> m;

    int n,i,j,l1,l2,s,max_level=0,front_node,adj_node;
    cin>>n;
    vector <int> v[n+1];
    vector <int> sv;
    int level[n+1]={0} , a[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]!=-1)
            v[a[i]].push_back(i);
        else
            sv.push_back(i);
    }

    l1 = sv.size();
    for(i=0;i<=l1-1;i++)
    {
        s = sv[i];
        q.push(s);
        m[s]++;
        while(!q.empty())
        {
            front_node = q.front();
            l2 = v[front_node].size();
            for(j=0;j<=l2-1;j++)
            {
                adj_node = v[front_node][j];
                if(m[adj_node]==0)
                {
                    q.push(adj_node);
                    m[adj_node]++;
                    level[adj_node] = level[front_node] + 1;
                    max_level = max(max_level,level[adj_node]);
                }
            }
            q.pop();
        }
    }

    cout<<max_level+1<<"\n";

    return 0;
}
