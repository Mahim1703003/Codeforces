#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> ma;
    int n,m,i,j,ct=0;
    cin>>n>>m;
    int a[n],b[m];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=m-1;i++)
        cin>>b[i];
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=m-1;j++)
        {
            if(b[j]==-1)
                continue;
            if(a[i]<=b[j])
            {
                ct++;
                b[j] = -1;
                break;
            }
            b[j] = -1;
        }
    }
    cout<<n-ct<<"\n";
    return 0;
}
