#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    int n,l,i;
    double x;
    cin>>n>>l;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    double b[n-1];
    for(i=0;i<=n-2;i++)
        b[i]=(a[i+1]*1.0-a[i]*1.0)/2.0;
    sort(b,b+n-1,greater<double>());
    if(a[0]!=0&&a[n-1]!=l)
    {
        x=((a[0]-0)>(l-a[n-1]))?(a[0]-0):(l-a[n-1]);
        if(x>b[0])
            b[0]=b[0]+(x-b[0]);
    }
    else if(a[0]!=0)
    {
        x=a[0]-0;
        if(x>b[0])
            b[0]=b[0]+(x-b[0]);
    }
    else if(a[n-1]!=l)
    {
        x=l-a[n-1];
        if(x>b[0])
            b[0]=b[0]+(x-b[0]);
    }
    cout<<fixed;
    cout<<setprecision(10)<<b[0]<<endl;
    return 0;
}
