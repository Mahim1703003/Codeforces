#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i;
    long long int sum = 0;
    cin>>n;
    for(i=1;i<=sqrt(n);i++)
    {
        if(i==1)
            sum = sum + n;
        else
        {
            if(n%i==0)
            {
                while(n%i==0)
                {
                    n = n / i;
                    sum = sum + n;
                }
            }
        }
    }
    if(n!=1)
        sum = sum + 1;
    cout<<sum<<"\n";
    return 0;
}
