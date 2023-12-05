#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,sum1=0,sum2=0,diff,add1,add2,diff1,i,k=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i]>>b[i];
        sum1=sum1+a[i];
        sum2=sum2+b[i];
    }
    diff=abs(sum1-sum2);
    for(i=0;i<=n-1;i++)
    {
        add1=sum1-a[i]+b[i];
        add2=sum2-b[i]+a[i];
        diff1=abs(add1-add2);
        if(diff1>diff)
        {
            diff=diff1;
            k=i+1;
        }
    }
    cout<<k<<endl;
    return 0;
}
