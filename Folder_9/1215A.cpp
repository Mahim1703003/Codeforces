#include<iostream>
using namespace std;
int main()
{
    int a1,a2,k1,k2,nt,n,sum=0;
    cin>>a1>>a2>>k1>>k2>>nt;
    n = nt;
    if(k1<=k2)
    {
        if(a1*k1<=n)
        {
            sum = sum + a1;
            n = n - a1*k1;
            if(a2*k2<=n)
                sum = sum + a2;
            else
                sum = sum + n/k2;
        }
        else
            sum = sum + n/k1;
    }
    else
    {
        if(a2*k2<=n)
        {
            sum = sum + a2;
            n = n - a2*k2;
            if(a1*k1<=n)
                sum = sum + a1;
            else
                sum = sum + n/k1;
        }
        else
            sum = sum + n/k2;
    }
    if((a1*(k1-1))+(a2*(k2-1))>=nt)
        cout<<0<<" ";
    else
        cout<<min(nt-((a1*(k1-1))+(a2*(k2-1))),a1+a2)<<" ";
    cout<<sum<<endl;
    return 0;
}
