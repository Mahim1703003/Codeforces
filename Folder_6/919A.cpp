#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,m,i;
    cin>>n>>m;
    int a[n],b[n];
    double c[n],temp;
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i]>>b[i];
        c[i]=((a[i]*1.0)*(m*1.0))/(b[i]*1.0);
    }
    for(i=1;i<=n-1;i++)
    {
        if(c[i]<c[0])
        {
            temp=c[0];
            c[0]=c[i];
            c[i]=temp;
        }
    }
    cout<<fixed;
    cout<<setprecision(10)<<c[0]<<endl;
    return 0;
}
