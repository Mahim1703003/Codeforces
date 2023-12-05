#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,sum=0,i;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    for(i=0;i<=n-1;i++)
    {
        if(i==0)
            sum = sum + a[i];
        else
        {
            if(a[i]<a[i-1])
                sum = sum + a[i];
            else
            {
                a[i] = max(0,a[i-1]-1);
                sum = sum + a[i];
            }
        }
    }
    cout<<sum<<"\n";
    return 0;
}
