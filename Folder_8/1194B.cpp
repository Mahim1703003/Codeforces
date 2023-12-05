#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> r,c;
    int q,n,m,i,j,k,minute=-1;
    cin>>q;
    while(q--)
    {
        cin>>n>>m;
        char a[n+1][m+1];
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
                cin>>a[i][j];
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(a[i][j]=='.')
                    r[i]++;
            }
        }
        for(j=1;j<=m;j++)
        {
            for(i=1;i<=n;i++)
            {
                if(a[i][j]=='.')
                    c[j]++;
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(a[i][j]=='.')
                    k = r[i] + c[j] - 1;
                else
                    k = r[i] + c[j];
                if(minute==-1)
                    minute = k;
                else
                    minute = min(minute,k);
            }
        }
        cout<<minute<<"\n";
        r.clear();
        c.clear();
        minute = -1;
    }
    return 0;
}
