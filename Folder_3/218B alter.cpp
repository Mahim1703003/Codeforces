#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,ct1=0,ct2=0,k=0,f=0,sum=0;
    cin>>n>>m;
    int a[m],b[m];
    for(i=0;i<=m-1;i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
    sort(b,b+m,greater<int>());
    while(1)
    {
        sort(a,a+m,greater<int>());
        while(a[0]>=a[1])
        {
            ct1++;
            sum = sum + a[0];
            if(a[0]!=0)
                a[0]--;
            if(ct1==n)
            {
                f++;
                break;
            }
        }
        if(f!=0)
            break;
    }
    cout<<sum<<" ";

    sum = 0;
    ct1 = 0;
    f = 0;
    for(i=m-1;i>=0;i--)
    {
        while(b[i])
        {
            ct1++;
            sum = sum + b[i];
            b[i]--;
            if(ct1==n)
            {
                f++;
                break;
            }
        }
        if(f!=0)
            break;
    }
    cout<<sum<<endl;
    return 0;
}
