#include<iostream>
#include<vector>
#include<cmath>
#define lld long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <lld> v;
    lld n,k,i,x,l,sum=0;
    cin>>n>>k;
    for(i=0;;i++)
    {
        x = pow(2.0,i*1.0);
        if(x<=n)
            v.push_back(x);
        else
            break;
    }
    if(k==1)
        cout<<n<<"\n";
    else
    {
        l = v.size();
        for(i=0;i<=l-1;i++)
            sum = sum + v[i];
        cout<<sum<<"\n";
    }
    return 0;
}
