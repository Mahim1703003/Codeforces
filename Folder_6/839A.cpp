#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0,k,sum=0,m=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=n-1;i++)
    {
        a[i]=a[i]+m;
        if(a[i]<=8)
        {
            sum=sum+a[i];
            m=0;
        }
        else
        {
            sum=sum+8;
            m=a[i]-8;
        }
        if(sum>=k)
        {
            c++;
            break;
        }
    }
    if(c!=0)
        cout<<i+1<<endl;
    else
        cout<<"-1\n";
    return 0;
}
