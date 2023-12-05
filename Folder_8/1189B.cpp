#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    if(a[0]<a[1]+a[2])
    {
        cout<<"YES\n";
        for(i=0;i<=n-1;i++)
        {
            if(i==1)
                continue;
            cout<<a[i]<<" ";
        }
        cout<<a[1]<<"\n";
    }
    else
        cout<<"NO\n";
    return 0;
}
