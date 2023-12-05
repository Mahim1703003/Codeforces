#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector < pair <int,int> > v1,v2;
    int n,i,x,a,l1,l2,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x>>a;
        if(x<0)
            v1.push_back(make_pair(x,a));
        else
            v2.push_back(make_pair(x,a));
    }
    sort(v2.begin(),v2.end());
    sort(v1.begin(),v1.end());
    reverse(v1.begin(),v1.end());
    l1 = v1.size();
    l2 = v2.size();
    if(l1<l2)
    {
        for(i=0;i<=l1-1;i++)
            sum = sum + v1[i].second + v2[i].second;
        sum = sum + v2[i].second;
    }
    else if(l1>l2)
    {
        for(i=0;i<=l2-1;i++)
            sum = sum + v1[i].second + v2[i].second;
        sum = sum + v1[i].second;
    }
    else
    {
        for(i=0;i<=l1-1;i++)
            sum = sum + v1[i].second + v2[i].second;
    }
    cout<<sum<<"\n";
    return 0;
}
