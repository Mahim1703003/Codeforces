#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,a,b,diff;
    cin>>n;
    for(a=0;a<=1000;a++)
    {
        for(b=0;b<=10000;b++)
        {
            diff = n - (a*1234567 + b*123456);
            if(diff>=0 && diff%1234==0)
            {
                cout<<"YES\n";
                return 0;
            }
        }
    }
    cout<<"NO\n";
    return 0;
}
