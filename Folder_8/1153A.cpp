#include<iostream>
#include<cmath>
#define lli long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli n,t,i,diff,next,next_time,min_time,bus;
    cin>>n>>t;
    lli a[n],b[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i]>>b[i];
    for(i=0;i<=n-1;i++)
    {
        if(t>=a[i])
        {
            diff = t - a[i];
            next = ceil((diff*1.0)/(b[i]*1.0));
            next_time = a[i] + (next*b[i]);
        }
        else
            next_time = a[i];
        if(i==0)
        {
            min_time = next_time;
            bus = i+1;
        }
        else
        {
            if(next_time<min_time)
            {
                min_time = next_time;
                bus = i+1;
            }
        }
    }
    cout<<bus<<"\n";
    return 0;
}
