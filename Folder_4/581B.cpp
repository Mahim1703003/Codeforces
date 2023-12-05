#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,i,max;
    cin>>n;
    long long int a[n],c[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=n-1;i>=0;i--)
    {
        if(i==n-1)
        {
            max = a[i];
            c[i] = 0;
        }
        else
        {
            if(a[i]>max)
            {
                max = a[i];
                c[i] = 0;
            }
            else
                c[i] = max - a[i] + 1;
        }
    }
    for(i=0;i<=n-1;i++)
        cout<<c[i]<<" ";
    cout<<"\n";
    return 0;
}
