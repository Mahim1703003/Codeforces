#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a[101] = {0},n,m,i,j,x,limit,sum=0;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>x;
        a[x]++;
    }
    limit = m / n;
    for(i=limit;i>=1;i--)
    {
        for(j=1;j<=100;j++)
            sum = sum + a[j]/i;
        if(sum>=n)
            break;
        sum = 0;
    }
    cout<<i<<"\n";
}
