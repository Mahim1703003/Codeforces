#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i,j,k=0;
    cin>>n;
    long long int a[n],b[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            if(a[i]==4)
                b[i]=1;
            else
                b[i]=0;
        }
        else
        {
            for(j=3;j<=sqrt(a[i]);j=j+2)
            {
                if(a[i]%j==0)
                {
                    k++;
                    if(k==2)
                        break;
                }
            }
            if(k==1)
                b[i]=1;
            else
                b[i]=0;
            k=0;
        }
    }
    for(i=0;i<=n-1;i++)
    {
        if(b[i]==1)
            cout<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
