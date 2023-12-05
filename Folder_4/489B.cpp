#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,j,sum=0;

    cin>>n;
    int b[n];
    for(i=0;i<=n-1;i++)
        cin>>b[i];
    sort(b,b+n);

    cin>>m;
    int g[m];
    for(i=0;i<=m-1;i++)
        cin>>g[i];
    sort(g,g+m);

    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=m-1;j++)
        {
            if(g[j]==-1)
                continue;
            if(abs(b[i]-g[j])<=1)
            {
                sum++;
                g[j] = -1;
                break;
            }
        }
    }

    cout<<sum<<endl;
    return 0;
}
