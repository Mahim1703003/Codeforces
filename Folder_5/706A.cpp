#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,i,n;
    cin>>a>>b>>n;
    int x[n],y[n],v[n];
    double d,h,t[n],temp;
    for(i=0;i<=n-1;i++)
    {
        cin>>x[i]>>y[i]>>v[i];
        h=pow(((a-x[i])*1.0),2.0)+pow(((b-y[i])*1.0),2.0);
        d=sqrt(h);
        t[i]=d/(v[i]*1.0);
    }
    for(i=1;i<=n-1;i++)
    {
        if(t[i]<t[0])
        {
            temp=t[0];
            t[0]=t[i];
            t[i]=temp;
        }
    }
    cout<<fixed;
    cout<<setprecision(10)<<t[0]<<endl;
    return 0;
}

