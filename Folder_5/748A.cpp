#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int lanes,desks,k,l,d,p;
    cin>>lanes>>desks>>k;
    l = ceil((k*1.0)/(desks*2*1.0));
    if(k%2==1)
    {
        p = (k+1)/2;
        if(p%desks==0)
            d = desks;
        else
            d = p%desks;
        cout<<l<<" "<<d<<" L\n";
    }
    else
    {
        p = k/2;
        if(p%desks==0)
            d = desks;
        else
            d = p%desks;
        cout<<l<<" "<<d<<" R\n";
    }
    return 0;
}
