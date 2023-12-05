#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[5],b[5],i,j,k=1,m=0,sum=0;
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    for(i=0;i<=4;i++)
    {
        if(a[i]==-1)
            continue;
        for(j=i+1;j<=4;j++)
        {
            if(a[i]==a[j])
            {
                k++;
                a[j]=-1;
            }
        }
        if(k>=3)
        {
            b[m]=sum-(3*a[i]);
            m++;
        }
        else if(k>=2)
        {
            b[m]=sum-(2*a[i]);
            m++;
        }
        k=1;
    }
    if(m==0)
        cout<<sum<<endl;
    else
    {
        sort(b,b+m);
        cout<<b[0]<<endl;
    }
    return 0;
}
