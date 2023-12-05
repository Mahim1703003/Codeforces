#include<iostream>
using namespace std;
int main()
{
    long long int n,m,i,j,sum1=0,sum2=0,x;
    cin>>n;
    long long int a[n];
    long long int c[100001] = {0};
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        c[a[i]] = i+1;
    }
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>x;
        sum1 = sum1 + c[x];
        sum2 = sum2 + (n-c[x]+1);
    }
    cout<<sum1<<" "<<sum2<<endl;
    return 0;
}
