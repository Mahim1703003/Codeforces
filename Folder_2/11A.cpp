#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,d,div,sum=0,i;
    cin>>n>>d;
    long long int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(i!=0)
        {
            if(a[i]<=a[i-1])
            {
                div = (a[i-1] - a[i]) / d;
                div++;
                sum = sum + div;
                a[i] = a[i] + (div*d);
            }
        }
    }
    cout<<sum<<"\n";
    return 0;
}
