#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int a,b,ans,n,i,k=0,mult=1;
    cin>>a>>b;
    if(a==b)
        ans = 1;
    else if(b-a==1)
        ans = b % 10;
    else
    {
        for(i=a+1;i<=b;i++)
        {
            if(i%5==0 || i%10==0)
            {
                k++;
                break;
            }
            n = i % 10;
            mult = mult * n;
        }
        if(k!=0)
            ans = 0;
        else
            ans = mult % 10;
    }
    cout<<ans<<"\n";
    return 0;
}
