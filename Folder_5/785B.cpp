#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector < pair <int,int> > v1,v2,v3,v4;
    int n,m,i,s,f,dis1=0,dis2=0,dis;

    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s>>f;
        v1.push_back(make_pair(f,s));
        v2.push_back(make_pair(s,f));
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>s>>f;
        v3.push_back(make_pair(f,s));
        v4.push_back(make_pair(s,f));
    }
    sort(v3.begin(),v3.end());
    sort(v4.begin(),v4.end());

    if(v1[0].first<v4[m-1].first)
        dis1 = v4[m-1].first - v1[0].first;
    if(v3[0].first<v2[n-1].first)
        dis2 = v2[n-1].first - v3[0].first;
    dis = max(dis1,dis2);

    cout<<dis<<"\n";
    return 0;
}
