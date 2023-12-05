#include<iostream>
#include<cmath>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i;
    double sum = 0;
    cin>>n;
    int r[n+1];
    for(i=1;i<=n;i++)
        cin>>r[i];
    sort(r+1,r+n+1);
    if(n%2==1)
    {
        for(i=1;i<=n;i=i+2)
        {
            if(i==1)
                sum = sum + acos(-1)*(r[i]*r[i]*1.0);
            else
                sum = sum + acos(-1)*(r[i]*r[i]*1.0-r[i-1]*r[i-1]*1.0);
        }
    }
    else
    {
        for(i=2;i<=n;i=i+2)
            sum = sum + acos(-1)*(r[i]*r[i]*1.0-r[i-1]*r[i-1]*1.0);
    }
    cout<<fixed;
    cout<<setprecision(10)<<sum<<"\n";
    return 0;
}
