#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(i%2==1)
            {
                if(a[i]<=0)
                    a[i] = a[i] * -1;
            }
            else
            {
                if(a[i]>=0)
                    a[i] = a[i] * -1;
            }
        }
        for(i=1;i<=n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
