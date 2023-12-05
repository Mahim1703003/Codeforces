#include<iostream>
using namespace std;

int main()
{
    long long int t,n,i,j,k=0,sum=0,m=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            if(a[i]%3==0)
            {
                a[i] = -1;
                k++;
            }
        }
        for(i=0;i<=n-1;i++)
        {
            if(a[i]==-1)
                continue;
            for(j=i+1;j<=n-1;j++)
            {
                if(a[j]==-1)
                    continue;
                if((a[i]+a[j])%3==0)
                {
                    m++;
                    a[i]=-1;
                    a[j]=-1;
                    k++;
                    break;
                }
            }
            if(m==0)
            {
                sum = sum + a[i];
                if(sum%3==0)
                {
                    k++;
                    sum = 0;
                }
            }
            m=0;
        }
        cout<<k<<endl;
        k=0;
        m=0;
        sum=0;
    }
    return 0;
}
