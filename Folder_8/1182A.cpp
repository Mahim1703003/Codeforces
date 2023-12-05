#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,div;
    long long int p;
    cin>>n;
    if(n%2==1)
        cout<<"0\n";
    else
    {
        div = n / 2;
        p = pow(2,div);
        cout<<p<<endl;
    }
    return 0;
}
