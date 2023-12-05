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
        int a[n];
        for(i=0;i<=n-1;i++)
            cin>>a[i];
        sort(a,a+n,greater<int>());
        for(i=0;i<=n-1;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
