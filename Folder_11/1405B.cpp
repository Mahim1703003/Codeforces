#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,positive,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n];
        for(i=0;i<=n-1;i++)
            cin>>a[i];
        for(i=0;i<=n-1;i++)
        {
            if(a[i]>=0)
            {
                positive = a[i];
                a[i] = 0;
                if(i+1<=n-1)
                    a[i+1] = a[i+1] + positive;
            }
        }
        cout<<positive<<"\n";
    }
    return 0;
}
