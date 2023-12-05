#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,k=0,j,a,b;
    cin>>n;
    int x[n+1],y[n+1];
    for(i=1;i<=n;i++)
        cin>>x[i]>>y[i];
    if(n==1)
        cout<<"-1\n";
    else if(n==2)
    {
        if(x[1]!=x[2]&&y[1]!=y[2])
            cout<<abs(x[1]-x[2])*abs(y[1]-y[2])<<"\n";
        else
            cout<<"-1\n";
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i==j)
                    continue;
                if(x[i]==x[j])
                    b = abs(y[i]-y[j]);
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i==j)
                    continue;
                if(y[i]==y[j])
                    a = abs(x[i]-x[j]);
            }
        }
        cout<<a*b<<"\n";
    }
    return 0;
}
