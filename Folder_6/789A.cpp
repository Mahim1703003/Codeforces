#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,k,total_pocket=0,total_days,x;
    cin>>n>>k;
    while(n--)
    {
        cin>>x;
        total_pocket = total_pocket + ceil((x*1.0)/(k*1.0));
    }
    total_days = ceil((total_pocket*1.0)/2.0);
    cout<<total_days<<"\n";
    return 0;
}
