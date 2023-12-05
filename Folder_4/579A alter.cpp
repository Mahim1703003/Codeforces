#include<iostream>
using namespace std;
int main()
{
    int x,sum=0,n=1,div;
    cin>>x;

    while(n<=x)
        n = 2 * n;

    n = n / 2;

    while(n)
    {
        div = x / n;
        sum = sum + div;
        x = x % n;
        n = n / 2;
    }
    cout<<sum<<endl;

    return 0;
}
