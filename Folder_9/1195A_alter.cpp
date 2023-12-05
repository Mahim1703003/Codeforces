#include<iostream>
#include<map>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    int n,k,i,x,sum1=0,sum2=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        m[x]++;
    }
    for(i=1;i<=k;i++)
    {
        sum1 = sum1 + (m[i]/2);
        sum2 = sum2 + (m[i]%2);
    }
    cout<<sum1*2+ceil((sum2*1.0)/2)<<"\n";
    return 0;
}

