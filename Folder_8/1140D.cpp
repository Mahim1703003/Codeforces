#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,a=1,b=2,c=3,sum=0;
    cin>>n;
    while(c<=n)
    {
        sum = sum + (a*b*c);
        b++;
        c++;
    }
    cout<<sum<<"\n";
    return 0;
}
