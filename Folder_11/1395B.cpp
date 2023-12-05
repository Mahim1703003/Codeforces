#include<iostream>
#include<map>
#include<utility>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map < pair <int,int> , int > cell;
    int n,m,x,y,i,j,k=0,l,ct=1;
    cin>>n>>m>>x>>y;
    l = n+1;
    i = x;
    j = y;
    cell[{i,j}]++;
    cout<<i<<" "<<j<<"\n";
    while(ct!=n*m)
    {
        k++;
        for(j=1;j<=m;j++)
        {
            if(cell[{i,j}]==0)
            {
                ct++;
                cell[{i,j}]++;
                cout<<i<<" "<<j<<"\n";
            }
        }
        j = j - k;
        for(i=1;i<=n;i++)
        {
            if(cell[{i,j}]==0)
            {
                ct++;
                cell[{i,j}]++;
                cout<<i<<" "<<j<<"\n";
            }
        }
        l--;
        if(l==x)
            l--;
        i = l;
    }
    return 0;
}
