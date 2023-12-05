#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,i,j,ct=0;
    cin>>n;
    int a[n+1] = {0};
    for(i=2;i<=sqrt(n);i++)
    {
        if(a[i]==0)
        {
            ct++;
            for(j=1;i*j<=n;j++)
                a[i*j] = ct;
        }
    }
    for(i=2;i<=n;i++)
    {
        if(a[i]==0)
        {
            ct++;
            a[i] = ct;
        }
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
