#include<iostream>
using namespace std;
int main()
{
    int n,i,j,a[4],sum=0,sum1=0,k=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=3;j++)
        {
            cin>>a[j];
            sum=sum+a[j];
        }
        if(i==1)
            sum1=sum;
        else
        {
            if(sum>sum1)
                k++;
        }
        sum=0;
    }
    cout<<k<<endl;
    return 0;
}
