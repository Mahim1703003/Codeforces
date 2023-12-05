#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int a,b,c,i,j,k,l,n,x,ct=0,sum=0;
    cin>>a>>b>>c;
    n = a * b * c;
    long long int ar[n+1] = {0};
    for(i=1;i<=n;i++)
    {
        for(j=1;i*j<=n;j++)
            ar[i*j]++;
    }
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            for(k=1;k<=c;k++)
            {
                x = i * j * k;
                sum = sum + ar[x];
            }
        }
    }
    sum = sum % 1073741824;
    cout<<sum<<"\n";
    return 0;
}
