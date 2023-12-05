#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b,c,aa=0,bb=0,cc=0,rem,i=-1;
    cin>>a>>b;
    c = a + b;
    while(a)
    {
        rem = a % 10;
        if(rem!=0)
        {
            i++;
            aa = aa + rem*pow(10,i);
        }
        a = a / 10;
    }
    i = -1;
    while(b)
    {
        rem = b % 10;
        if(rem!=0)
        {
            i++;
            bb = bb + rem*pow(10,i);
        }
        b = b / 10;
    }
    i = -1;
    while(c)
    {
        rem = c % 10;
        if(rem!=0)
        {
            i++;
            cc = cc + rem*pow(10,i);
        }
        c = c / 10;
    }
    if(aa+bb==cc)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
