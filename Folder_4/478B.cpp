#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,m,d,max_pair,div,rem,a,min_pair;
    cin>>n>>m;
    d = n - (m-1);
    max_pair = (d*(d-1))/2;
    div = n / m;
    rem = n % m;
    a = m - rem;
    min_pair = a*(div*(div-1)/2) + rem*(div*(div+1)/2);
    cout<<min_pair<<" "<<max_pair<<"\n";
    return 0;
}
