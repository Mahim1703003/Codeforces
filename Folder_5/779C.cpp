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
    vector < pair < int, pair <int,int> > > v2;
    vector <int> v1;
    int n,k,i,sum=0,len1,len2,deficit,ct=0;
    cin>>n>>k;
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=n-1;i++)
        cin>>b[i];
    for(i=0;i<=n-1;i++)
    {
        if(a[i]<=b[i])
            v1.push_back(a[i]);
        else
            v2.push_back(make_pair(a[i]-b[i],make_pair(a[i],b[i])));
    }
    if(v1.size()>=k)
    {
        len1 = v1.size();
        for(i=0;i<=len1-1;i++)
            sum = sum + v1[i];
        len2 = v2.size();
        for(i=0;i<=len2-1;i++)
            sum = sum + v2[i].second.second;
        cout<<sum<<"\n";
    }
    else
    {
        len1 = v1.size();
        for(i=0;i<=len1-1;i++)
            sum = sum + v1[i];
        deficit = k - len1;
        sort(v2.begin(),v2.end());
        len2 = v2.size();
        for(i=0;i<=len2-1;i++)
        {
            ct++;
            if(ct<=deficit)
                sum = sum + v2[i].second.first;
            else
                sum = sum + v2[i].second.second;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
