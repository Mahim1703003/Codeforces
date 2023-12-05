#include<iostream>
using namespace std;
int main()
{
    long long int n,sum1=0,sum2=0,big=0,i;
    cin>>n;
    long long int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        sum1=sum1+a[i];
        if(a[i]>big)
            big=a[i];
    }
    for(i=0;i<=n-1;i++)
        sum2=sum2+(big-a[i]);
    if(sum2>sum1)
        cout<<big<<endl;
    else
    {
        for(i=1;i>=0;i++)
        {
            sum2=sum2+n;
            if(sum2>sum1)
                break;
        }
        cout<<big+i<<endl;
    }
    return 0;
}
