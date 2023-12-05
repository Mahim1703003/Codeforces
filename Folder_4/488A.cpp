#include<iostream>
#define lli long long int
using namespace std;

int does_it_contain_8(lli n)
{
    int ct=0;
    while(n)
    {
        if(n%10==8||n%10==-8)
        {
            ct++;
            break;
        }
        n = n / 10;
    }
    return ct;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli a,i,b,ct=0;
    cin>>a;
    for(i=a+1;;i++)
    {
        if(does_it_contain_8(i))
            break;
    }
    cout<<i-a<<"\n";
    return 0;
}
