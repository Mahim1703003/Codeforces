#include<iostream>
using namespace std;
int main()
{
    int n,k,i,j,m=0,c=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=n-1;i++)
    {
        if(a[i]==-1)
            continue;
        m++;
        for(j=i+1;j<=n-1;j++)
        {
            if(a[i]==a[j])
                a[j]=-1;
        }
    }
    if(m>=k)
    {
        cout<<"YES\n";
        for(i=0;i<=n-1;i++)
        {
            if(a[i]!=-1)
            {
                c++;
                if(c<=k)
                    cout<<i+1<<" ";
            }
        }
    }
    else
        cout<<"NO\n";
    return 0;
}
