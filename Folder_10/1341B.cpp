#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,k,i,j,max_peak,sum=0,in;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n+1],b[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            b[i] = 0;
        }
        for(i=1;i<=n;i++)
        {
            if(i==0||i==n)
                continue;
            else
            {
                if(a[i]>a[i-1]&&a[i]>a[i+1])
                    b[i]++;
            }
        }
        for(i=1;i<=1+k-1;i++)
        {
            if(i==1||i==1+k-1)
                continue;
            sum = sum + b[i];
        }
        max_peak = sum;
        in = 1;
        i = 2;
        j = i + k - 1;
        while(j<=n)
        {
            sum = sum - b[i];
            sum = sum + b[j-1];
            if(sum>max_peak)
            {
                max_peak = sum;
                in = i;
            }
            i++;
            j++;
        }
        cout<<max_peak+1<<" "<<in<<"\n";
        sum = 0;
    }
    return 0;
}
