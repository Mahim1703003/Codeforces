#include<iostream>
using namespace std;
int main()
{
    long long int n,m,a,b,rem;
    cin>>n>>m>>a>>b;
    rem = n % m;
    cout<<min(rem*b,(m-rem)*a)<<endl;
    return 0;
}
