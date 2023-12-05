#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
int main()
{
    vector < pair<int,int> > v1;
    vector < pair<int,int> > v2;

    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(a[i]==0)
            a[i] = -1;
        if(a[i]>0)
            v1.push_back(make_pair(a[i],i));
        else
            v2.push_back(make_pair(a[i],i));
    }
    if(v1.size()!=0){
    if(v1.size()%2==0)
    {
        for(i=0;i<=v1.size()-1;i++)
            v1[i].first = (-1 * v1[i].first) - 1;
    }
    else
    {
        sort(v1.begin(),v1.end());
        for(i=v1.size()-1;i>=1;i--)
            v1[i].first = (-1 * v1[i].first) - 1;
    }
    for(i=0;i<=v1.size()-1;i++)
        a[v1[i].second] = v1[i].first;
    }
    if(v2.size()!=0){
    if(v2.size()%2==1)
    {
        if(v1.size()==1){
            v1[0].first = (-1 * v1[0].first) - 1;
            a[v1[0].second] = v1[0].first;
        }
        else{
        sort(v2.begin(),v2.end());
        v2[0].first = (-1 * v2[0].first) - 1;
        }
    }
    for(i=0;i<=v2.size()-1;i++)
        a[v2[i].second] = v2[i].first;
    }
    for(i=0;i<=n-1;i++)
        cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}
