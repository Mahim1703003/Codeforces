#include<iostream>
using namespace std;

int main()
{
    long long int t,sum=0,div,rem,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        while(n)
        {
            rem = n % k;
            n = n / k;
            if(n==0)
                sum = sum + rem;
            else
                sum = sum + rem + 1;
        }
        cout<<sum<<endl;
        sum = 0;
    }
    return 0;
}
