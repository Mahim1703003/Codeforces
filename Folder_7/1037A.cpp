#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //double n,x;
    long long int n,ans,i,sum=0,mult=1,k=0;
    cin>>n;
    for(i=0;;i++)
    {
        if(i!=0)
            mult = mult * 2;
        sum = sum + mult;
        k++;
        if(sum>=n)
            break;
    }
    cout<<k<<"\n";
    /*x = ((-1*1.0)+sqrt(1.0+8.0*n)) / 2.0;
    ans = ceil(x);*/
    //cout<<ans<<"\n";
    return 0;
}
