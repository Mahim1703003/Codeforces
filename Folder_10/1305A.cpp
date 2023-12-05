#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],b[n];
        for(i=0;i<=n-1;i++)
            cin>>a[i];
        for(i=0;i<=n-1;i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        for(i=0;i<=n-1;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        for(i=0;i<=n-1;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
    return 0;
}
