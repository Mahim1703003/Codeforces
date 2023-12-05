#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,n1,n2,sum=0,ma,mi,k=0,i,j;
    double avg1,avg2,avg;
    cin>>n>>n1>>n2;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    mi = min(n1,n2);
    ma = max(n1,n2);
    for(i=0;i<=n-1;i++)
    {
        k++;
        sum = sum + a[i];
        if(k==mi)
        {
            avg1 = (sum*1.0) / (mi*1.0);
            k = 0;
            sum = 0;
            for(j=i+1;j<=n-1;j++)
            {
                k++;
                sum = sum + a[j];
                if(k==ma)
                {
                    avg2 = (sum*1.0) / (ma*1.0);
                    break;
                }
            }
            break;
        }
    }
    avg = avg1 + avg2;
    cout<<fixed;
    cout<<setprecision(8)<<avg<<"\n";
    return 0;
}
