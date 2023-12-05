#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int a,b,diff,d;
    cin>>a>>b;
    while(1)
    {
        if(a==0 || b==0)
            break;
        else if(a>=2*b)
        {
            diff = a - 2*b;
            d = ceil((diff*1.0)/(2*b*1.0));
            a = a - d*2*b;
            if(a==2*b)
                a = a - 2*b;
        }
        else if(b>=2*a)
        {
            diff = b - 2*a;
            d = ceil((diff*1.0)/(2*a*1.0));
            b = b - d*2*a;
            if(b==2*a)
                b = b - 2*a;
        }
        else
            break;
    }
    cout<<a<<" "<<b<<"\n";
    return 0;
}
