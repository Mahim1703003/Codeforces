#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,q,x,y,n1,n2,a,b,l;
    cin>>n>>q;
    l = n*n;
    l = ceil((l*1.0)/2.0);
    if(n%2==1)
        a = l + (n-1)/2;
    else
        a = l + n/2;
    b = a - n;
    while(q--)
    {
        cin>>x>>y;
        if((1+y)%2==0)
            n1 = (1+y) / 2;
        else
            n1 = l + (y/2);
        if(x==1)
            cout<<n1<<"\n";
        else
        {
            if((1+y)%2==(x+y)%2)
            {
                n2 = n1 + ((x-1)/2)*n;
                cout<<n2<<"\n";
            }
            else
            {
                if((1+y)%2==1)
                    n1 = n1 - b;
                else
                    n1 = n1 + a;
                n2 = n1 + ((x-2)/2)*n;
                cout<<n2<<"\n";
            }
        }
    }
    return 0;
}
