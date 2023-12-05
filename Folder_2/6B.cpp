#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <char,int> ma;
    char c,x;
    int n,m,i,j;
    cin>>n>>m>>c;
    char a[n+2][m+2];
    for(i=0;i<=n+1;i++)
    {
        for(j=0;j<=m+1;j++)
            a[i][j] = '1';
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>x;
            a[i][j] = x;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(a[i][j]==c)
            {
                if(a[i+1][j]!=c && (a[i+1][j]>='A'&&a[i+1][j]<='Z'))
                    ma[a[i+1][j]]++;
                if(a[i-1][j]!=c && (a[i-1][j]>='A'&&a[i-1][j]<='Z'))
                    ma[a[i-1][j]]++;
                if(a[i][j+1]!=c && (a[i][j+1]>='A'&&a[i][j+1]<='Z'))
                    ma[a[i][j+1]]++;
                if(a[i][j-1]!=c && (a[i][j-1]>='A'&&a[i][j-1]<='Z'))
                    ma[a[i][j-1]]++;
            }
        }
    }
    cout<<ma.size()<<"\n";
    return 0;
}
