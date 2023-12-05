#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    vector <int> v;
    int n,i,x,max_number=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        m[x]++;
        if(m[x]==1)
            v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(i=0;i<=v.size()-1;i++)
    {
        x = v[i];
        max_number = max(max_number,m[x]+m[x+1]+m[x+2]+m[x+3]+m[x+4]+m[x+5]);
    }
    cout<<max_number<<"\n";
    return 0;
}
