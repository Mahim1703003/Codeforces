#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,i,j,x,min_cost,max_cost;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>x;
            if(j==1)
                min_cost = x;
            else
                min_cost = min(min_cost,x);
        }
        if(i==1)
            max_cost = min_cost;
        else
            max_cost = max(max_cost,min_cost);
    }
    cout<<max_cost<<"\n";
    return 0;
}
