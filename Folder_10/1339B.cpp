#include<iostream>
#include<algorithm>
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
        int a[n],b[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            b[i] = a[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        for(i=(n-1)/2;i>=0;i--)
        {
            if(i==(n-1)/2)
            {
                if(n%2==0)
                    cout<<a[i]<<" "<<b[i]<<" ";
                else
                    cout<<b[i]<<" ";
            }
            else
                cout<<a[i]<<" "<<b[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
