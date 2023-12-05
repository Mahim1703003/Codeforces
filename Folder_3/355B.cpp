#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int c1,c2,c3,c4,n,m,i,j,sum1=0,sum2=0,sum;
    cin>>c1>>c2>>c3>>c4>>n>>m;
    int a[n],b[m];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        sum1 = sum1 + min(a[i]*c1,c2);
    }
    sum1 = min(sum1,c3);
    for(i=0;i<=m-1;i++)
    {
        cin>>b[i];
        sum2 = sum2 + min(b[i]*c1,c2);
    }
    sum2 = min(sum2,c3);
    sum = min(sum1+sum2,c4);
    cout<<sum<<"\n";
    return 0;
}
