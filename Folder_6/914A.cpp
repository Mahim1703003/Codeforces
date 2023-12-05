#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i,m,k=-10000000;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        m=(int)sqrt(a[i]);
        if((m*m!=a[i])||(a[i]<0))
        {
            if(a[i]>k)
                k=a[i];
        }
    }
    cout<<k<<endl;
    return 0;
}
