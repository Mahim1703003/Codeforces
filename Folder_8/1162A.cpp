#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,h,m,l,r,x,i;
    long long sum = 0;
    cin>>n>>h>>m;
    int a[n+1];
    memset(a,-1,sizeof(a));
    while(m--)
    {
        cin>>l>>r>>x;
        for(i=l;i<=r;i++)
        {
            if(a[i]==-1)
                a[i] = x;
            else
            {
                if(x<a[i])
                    a[i] = x;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==-1)
            sum = sum + h*h;
        else
            sum = sum + a[i]*a[i];
    }
    cout<<sum<<endl;
    return 0;
}
