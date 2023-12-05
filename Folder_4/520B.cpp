#include<iostream>
using namespace std;
int main()
{
    int n,m,k1=0,k2=0,a,b,s;
    cin>>n>>m;
    a = n;
    b = m;

    if(n>m)
        cout<<n-m<<endl;
    else
    {
        while(a<b)
        {
            a = 2 * a;
            k1++;
        }
        k1 = k1 + (a - b);

        a = n;

        while(b>a && b%2==0)
            b = b / 2;

        if(b<=a)
        {
            k2 = k2 + (a-b);
            while(b!=m)
            {
                b = 2 * b;
                k2++;
            }
        }
        else
        {
            while(a<b)
            {
                a = 2 * a;
                k2++;
            }
            k2 = k2 + (a - b);
            while(b!=m)
            {
                b = 2 * b;
                k2++;
            }

        }
        s = (k1<k2)?k1:k2;
        cout<<s<<endl;

    }

    return 0;

}
