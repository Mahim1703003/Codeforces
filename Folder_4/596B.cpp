#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,i,k=0;
    cin>>n;
    long long int a[n],b[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>b[i];
        if(i==0)
        {
            a[i] = 0;
            if(b[i]>=a[i])
                k = k + (b[i] - a[i]);
            else
                k = k + (a[i] - b[i]);
            a[i] = b[i];
        }
        else
        {
            a[i] = a[i-1];
            if(b[i]>=a[i])
                k = k + (b[i] - a[i]);
            else
                k = k + (a[i] - b[i]);
            a[i] = b[i];
        }
    }
    cout<<k<<"\n";
    return 0;
}
