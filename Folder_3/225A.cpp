#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    int n,x,i,a,b;
    cin>>n>>x;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        m[a]++;
        m[7-a]++;
        m[b]++;
        m[7-b]++;
    }
    if(m[x]==0&&m[7-x]==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
