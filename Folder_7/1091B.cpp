#include<iostream>
#include<map>
#include<utility>
#include<iterator>
using namespace std;
int main()
{
    /*map < pair <int,int> , int > m;
    map < pair <int,int> , int >::iterator it;
    cout<<m[{3,4}]<<"\n";
    m[{3,4}]++;
    cout<<m[{3,4}]<<"\n";
    it = m.begin();
    cout<<it->first.first<<" "<<it->first.second;*/
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map < pair <int,int> , int> m;
    map < pair <int,int> , int>::iterator it;
    int n,i,j;
    cin>>n;
    int x[n],y[n],a[n],b[n];
    for(i=0;i<=n-1;i++)
        cin>>x[i]>>y[i];
    for(i=0;i<=n-1;i++)
        cin>>a[i]>>b[i];
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
            m[{x[i]+a[j],y[i]+b[j]}]++;
    }
    for(it=m.begin();it!=m.end();it++)
    {
        if(it->second==n)
        {
            cout<<it->first.first<<" "<<it->first.second<<"\n";
            break;
        }
    }
    return 0;
}
