#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,i,x;
    cin>>n;
    long long int a[n+1],b[n/2+1];
    for(i=1;i<=n/2;i++)
    {
        cin>>b[i];
        if(i==1)
        {
            a[i] = 0;
            a[n-i+1] = b[i];
            x = b[i];
        }
        else
        {
            if(b[i]>x)
            {
                a[n-i+1] = x;
                a[i] = b[i] - x;
                if(a[i]<a[i-1])
                {
                    a[i] = a[i-1];
                    a[n-i+1] = b[i] - a[i];
                    x = b[i] - a[i];
                }
            }
            else
            {
                a[i] = a[i-1];
                a[n-i+1] = b[i] - a[i];
                x = b[i] - a[i];
            }
        }
    }
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
    return 0;
}
