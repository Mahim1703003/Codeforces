#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    vector <int> v;
    int n,x,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        m[x]++;
        if(m[x]==1)
            v.push_back(x);
    }
    if(v.size()==1||v.size()==2)
        cout<<"YES\n";
    else if(v.size()==3)
    {
        sort(v.begin(),v.end());
        if(v[1]-v[0]==v[2]-v[1])
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else
        cout<<"NO\n";
    return 0;
}
