#include<iostream>
#include<cmath>
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli x=1,k,n,f=0,i=-1;
    cin>>k>>n;
    while(1)
    {
        i++;
        x = x * k;
        if(x==n)
        {
            f++;
            break;
        }
        if(x>n)
            break;
    }
    if(f==1)
        cout<<"YES\n"<<i<<"\n";
    else
        cout<<"NO\n";
    return 0;
}
