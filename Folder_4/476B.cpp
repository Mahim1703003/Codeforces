#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    char a[12],b[12];
    cin>>a;
    cin>>b;
    int i;
    double p11=0,p21=0,p12=0,p22=0,q=0,d1,d2,fact1=1,fact2=1,fact3=1,favour,p;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='+')
            p11++;
        if(a[i]=='-')
            p21++;
        if(b[i]=='+')
            p12++;
        if(b[i]=='-')
            p22++;
        if(b[i]=='?')
            q++;
    }
    if(q==0)
    {
        if(p11==p12&&p21==p22)
        {
            p=1;
            cout<<fixed;
            cout<<setprecision(10)<<p<<endl;
        }
        else
        {
            p=0;
            cout<<fixed;
            cout<<setprecision(10)<<p<<endl;
        }
    }
    else
    {
        d1=abs(p11-p12);
        d2=abs(p21-p22);
        if(d1+d2>q)
        {
            p=0;
            cout<<fixed;
            cout<<setprecision(10)<<p<<endl;
        }
        else
        {
            for(i=0;i<=d1-1;i++)
                fact1=fact1*((i+1)*1.0);
            for(i=0;i<=d2-1;i++)
                fact2=fact2*((i+1)*1.0);
            for(i=0;i<=(d1+d2)-1;i++)
                fact3=fact3*((i+1)*1.0);
            favour=fact3/(fact1*fact2);
            p=favour/pow(2,q);
            cout<<fixed;
            cout<<setprecision(10)<<p<<endl;
        }
    }
    return 0;
}
