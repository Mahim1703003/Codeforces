#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k,a,b,v,i,sum=0,divisor;
    cin>>k>>a>>b>>v;
    divisor = k - 1;
    for(i=1;;i++)
    {
        if(b>=divisor)
        {
            b = b - divisor;
            sum = sum + (k*v);
        }
        else
        {
            if(b!=0)
            {
                sum = sum + (b+1)*v;
                b = b - b;
            }
            else
                sum = sum + v;
        }
        if(sum>=a)
            break;
    }
    cout<<i<<"\n";
    return 0;
}
