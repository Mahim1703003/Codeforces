#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k,i,j,sum=0;
    double avg,mavg=0;
    cin>>n>>k;
    int a[n+1];
    for(i=1;i<=n;i++)
        cin>>a[i];
    while(k<=n)
    {
        for(i=1;i<=k;i++)
            sum = sum + a[i];
        avg = (sum*1.0) / (k*1.0);
        if(avg>mavg)
            mavg = avg;
        for(i=2,j=k+1;i<=n-k+1;i++,j++)
        {
            sum = sum - a[i-1];
            sum = sum + a[j];
            avg = (sum*1.0) / (k*1.0);
            if(avg>mavg)
                mavg = avg;
        }
        sum = 0;
        k++;
    }
    cout<<fixed;
    cout<<setprecision(15)<<mavg<<"\n";
    return 0;
}
