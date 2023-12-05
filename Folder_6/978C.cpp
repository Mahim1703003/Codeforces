#include<iostream>
using namespace std;

int main()
{
    long long int n,m,i,k=0,sum1=0,sum2=0;
    cin>>n>>m;
    long long int a[n],b[m];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=m-1;i++)
        cin>>b[i];
    i = 0;
    sum2 = sum2 + a[k];
    while(i!=m)
    {
        if(b[i]>sum1 && b[i]<=sum2)
        {
            cout<<k+1<<" "<<b[i]-sum1<<endl;
            i++;
        }
        else
        {
            sum1 = sum1 + a[k];
            k++;
            sum2 = sum2 + a[k];
        }
    }
    return 0;
}
