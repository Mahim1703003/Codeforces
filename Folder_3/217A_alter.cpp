#include<iostream>
#include<utility>
#include<vector>
#include<map>
using namespace std;

vector < pair <int,int> > v;
map < pair <int,int> , int > m;
int n;

void dfs(int sx,int sy)
{
    int i,x,y;
    m[{sx,sy}]++;
    for(i=0;i<=n-1;i++)
    {
        x = v[i].first;
        y = v[i].second;
        if(sx==x || sy==y)
        {
            if(m[{x,y}]==0)
                dfs(x,y);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x,y,i,ct=0;

    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    for(i=0;i<=n-1;i++)
    {
        x = v[i].first;
        y = v[i].second;
        if(m[{x,y}]==0)
        {
            ct++;
            dfs(x,y);
        }
    }

    cout<<ct-1<<"\n";
    return 0;
}
