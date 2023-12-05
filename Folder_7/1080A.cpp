#include<iostream>
using namespace std;
int main()
{
    long long int n,k,r,g,b;
    cin>>n>>k;
    r=(n*2)/k;
    if((n*2)%k!=0)
        r++;
    g=(n*5)/k;
    if((n*5)%k!=0)
        g++;
    b=(n*8)/k;
    if((n*8)%k!=0)
        b++;
    cout<<r+g+b<<endl;
    return 0;
}
