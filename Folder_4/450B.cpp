#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int f1,f2,n,div,rem,a=1000000007,number,ans;
    cin>>f1>>f2>>n;
    if(n%3==0)
    {
        if(n%2==1)
            number = f2 - f1;
        else
            number = f1 - f2;
    }
    else if(n%3==1)
    {
        if(n%2==0)
            number = -1 * f1;
        else
            number = f1;
    }
    else
    {
        if(n%2==1)
            number = -1 * f2;
        else
            number = f2;
    }
    div = number / a;
    rem = number % a;
    if(rem>=0)
        ans = rem;
    else
        ans = number - a*(div-1);
    cout<<ans<<"\n";
    return 0;
}
