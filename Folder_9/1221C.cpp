#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q,c,m,x,a,b,sum=0;
    cin>>q;
    while(q--)
    {
        cin>>c>>m>>x;
        a = min(c,m);
        c = c - a;
        m = m - a;
        b = c + m + x;
        if(a<=b)
            cout<<a<<"\n";
        else
        {
            sum = sum + b;
            a = a - b;
            sum = sum + ((2*a)/3);
            cout<<sum<<"\n";
        }
        sum = 0;
    }
    return 0;
}
