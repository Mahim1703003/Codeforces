#include<iostream>
using namespace std;
int main()
{
    int n,n1,n2,s;
    cin>>n;
    n1=n%10;
    n2=10-(n%10);
    s=(n1<n2)?n1:n2;
    if((n+s)%10==0)
        cout<<n+s<<endl;
    else
        cout<<n-s<<endl;
    return 0;
}
