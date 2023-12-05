#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector < pair <int,int> > v;
    int n,m,i,j,k=0;
    cin>>n>>m;
    int a[n][m],b[n][m];
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=m-1;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==0)
                k++;
            b[i][j] = 0;
        }
    }
    if(k==n*m)
        cout<<"0\n";
    else
    {
        for(i=0;i<=n-2;i++)
        {
            for(j=0;j<=m-2;j++)
            {
                if(a[i][j]==1&&a[i][j+1]==1&&a[i+1][j]==1&&a[i+1][j+1]==1)
                {
                    b[i][j] = 1;
                    b[i][j+1] = 1;
                    b[i+1][j] = 1;
                    b[i+1][j+1] = 1;
                    v.push_back(make_pair(i+1,j+1));
                }
            }
        }
        k = 0;
        for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=m-1;j++)
            {
                if(a[i][j]==b[i][j])
                    k++;
            }
        }
        if(k==n*m)
        {
            cout<<v.size()<<"\n";
            for(i=0;i<=v.size()-1;i++)
                cout<<v[i].first<<" "<<v[i].second<<"\n";
        }
        else
            cout<<"-1\n";
    }
    return 0;
}
