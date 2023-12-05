#include<iostream>
#include<map>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    map <int,int>::iterator it;
    vector <int> v;
    int n,i,j,x,ct=0,k=0,f=0;
    cin>>n;
    int a[n+1][n+1];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
            a[i][j] = 0;
    }
    for(i=1;i<=n-1;i++)
    {
        cin>>x;
        m[x]++;
        if(m[x]==1)
            v.push_back(x);
        a[x][i+1] = 1;
    }
    for(i=0;i<=v.size()-1;i++)
    {
        x = v[i];
        for(j=1;j<=n;j++)
        {
            if(a[x][j]==1&&m[j]==0)
                ct++;
        }
        if(ct>=3)
            k++;
        ct = 0;
    }
    if(k==v.size())
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
