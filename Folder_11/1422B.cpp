#include<iostream>
#include<map>
#include<vector>
#include<utility>
#include<cstdlib>
#include<algorithm>
#define lld long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map < pair <lld,lld> , lld > ma;
    vector <int> v;
    lld t,n,m,i,j,x,y,median,steps=0,l;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        lld a[n+1][m+1];
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
                cin>>a[i][j];
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(a[i][j]!=-1)
                {
                    x = i; y = j;
                    if(ma[{x,y}]==0)
                    {
                        v.push_back(a[x][y]);
                        ma[{x,y}]++;
                    }
                    x = i; y = m - j + 1;
                    if(ma[{x,y}]==0)
                    {
                        v.push_back(a[x][y]);
                        ma[{x,y}]++;
                    }
                    x = n - i + 1; y = j;
                    if(ma[{x,y}]==0)
                    {
                        v.push_back(a[x][y]);
                        ma[{x,y}]++;
                    }
                    x = n - i + 1; y = m - j + 1;
                    if(ma[{x,y}]==0)
                    {
                        v.push_back(a[x][y]);
                        ma[{x,y}]++;
                    }
                    l = v.size();
                    sort(v.begin(),v.end());
                    l = l / 2;
                    median = v[l];
                    ma.clear();
                    x = i; y = j;
                    if(ma[{x,y}]==0)
                    {
                        steps = steps + abs(median-a[x][y]);
                        ma[{x,y}]++;
                        a[x][y] = -1;
                    }
                    x = i; y = m - j + 1;
                    if(ma[{x,y}]==0)
                    {
                        steps = steps + abs(median-a[x][y]);
                        ma[{x,y}]++;
                        a[x][y] = -1;
                    }
                    x = n - i + 1; y = j;
                    if(ma[{x,y}]==0)
                    {
                        steps = steps + abs(median-a[x][y]);
                        ma[{x,y}]++;
                        a[x][y] = -1;
                    }
                    x = n - i + 1; y = m - j + 1;
                    if(ma[{x,y}]==0)
                    {
                        steps = steps + abs(median-a[x][y]);
                        ma[{x,y}]++;
                        a[x][y] = -1;
                    }
                }
                ma.clear();
                v.clear();
            }
        }
        cout<<steps<<"\n";
        steps = 0;
        ma.clear();
        v.clear();
    }
    return 0;
}
