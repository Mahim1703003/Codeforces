#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
    vector < pair <int,int> > v;
    int n,i,x,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        v.push_back(make_pair(x,i));
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(i=0;i<=v.size()-1;i++)
        sum = sum + (v[i].first*i+1);
    cout<<sum<<endl;
    for(i=0;i<=v.size()-1;i++)
        cout<<v[i].second<<" ";
    cout<<endl;
    return 0;
}
