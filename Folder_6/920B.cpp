#include<iostream>
#include<map>
#include<queue>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    queue <int> q;
    map <int,int> m;

    int n,i,s,l,front_node,adj_node,ct=0;
    cin>>n;

    int p[n+1],c[n+1];
    vector <int> v[n+1];

    for(i=2;i<=n;i++)
    {
        cin>>p[i];
        v[i].push_back(p[i]);
        v[p[i]].push_back(i);
    }

    for(i=1;i<=n;i++)
        cin>>c[i];

    s = 1;

    q.push(s);
    m[1]++;
    while(!q.empty())
    {
        front_node = q.front();
        l = v[front_node].size();
        for(i=0;i<=l-1;i++)
        {
            adj_node = v[front_node][i];
            if(m[adj_node]==0)
            {
                if(c[front_node]!=c[adj_node])
                    ct++;
                q.push(adj_node);
                m[adj_node]++;
            }
        }
        q.pop();
    }

    cout<<ct+1<<"\n";
    return 0;
}
