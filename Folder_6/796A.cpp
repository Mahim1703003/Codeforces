#include<iostream>
using namespace std;
int main()
{
    int n,m,t,i,x=200,y=200,z;
    cin>>n>>m>>t;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=m;i<=n-1;i++)
    {
        if(a[i]==0)
            continue;
        if(a[i]<=t)
        {
            x=i-(m-1);
            break;
        }
    }
    for(i=m-2;i>=0;i--)
    {
        if(a[i]==0)
            continue;
        if(a[i]<=t)
        {
            y=(m-1)-i;
            break;
        }
    }
    z=(x<y)?x:y;
    cout<<z*10<<endl;
    return 0;
}
