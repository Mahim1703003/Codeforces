#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i,sum=0,ans;
    cin>>n;
    ans = 2*(1+n);
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(2*(i+n/i)<ans)
                ans = 2*(i+n/i);
        }
    }
    cout<<ans<<"\n";
    return 0;
}
