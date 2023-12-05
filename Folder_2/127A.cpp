#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int i,n;
    double k,time,sum=0;
    cin>>n>>k;
    double a[n],b[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i]>>b[i];
        if(i!=0)
            sum = sum + sqrt(pow(a[i]-a[i-1],2.0)+pow(b[i]-b[i-1],2.0));
    }
    time = sum / (50*1.0);
    time = time * k;
    cout<<fixed;
    cout<<setprecision(9)<<time<<"\n";
    return 0;
}
