#include<iostream>
using namespace std;

long long int maxDigit(long long int n)
{
    long long int maxd = 0,rem;
    while(n)
    {
        rem = n % 10;
        maxd = max(maxd,rem);
        n = n / 10;
    }
    return maxd;
}

long long int minDigit(long long int n)
{
    long long int mind = 9,rem;
    while(n)
    {
        rem = n % 10;
        mind = min(mind,rem);
        n = n / 10;
    }
    return mind;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,a1,a2,k,i;
    cin>>t;
    while(t--)
    {
        cin>>a1>>k;
        for(i=1;i<=k-1;i++)
        {
            a2 = a1 + maxDigit(a1)*minDigit(a1);
            if(minDigit(a2)==0)
                break;
            a1 = a2;
        }
        if(k==1)
            cout<<a1<<"\n";
        else
            cout<<a2<<"\n";
    }
    return 0;
}
