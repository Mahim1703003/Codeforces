#include<iostream>
#include<cmath>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <long long int,long long int> m;
    long long int t,n,i,j,sum=0,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n];
        for(j=0;j<=n-1;j++)
        {
            cin>>a[j];
            for(i=0;i<=30;i++)
            {
                k = pow(2.0,i*1.0);
                sum = sum + k;
                if(a[j]<=sum)
                {
                    m[i]++;
                    break;
                }
            }
            sum = 0;
        }
        sum = 0;
        for(i=0;i<=30;i++)
            sum = sum + ((m[i]-1)*m[i])/2;
        cout<<sum<<"\n";
        sum = 0;
        m.clear();
    }
    return 0;
}
