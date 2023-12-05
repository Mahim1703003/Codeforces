#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,i,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
            cin>>a[i];
        sort(a,a+n,greater<int>());
        k = n - 2;
        if(k+1<=a[1])
            cout<<k<<endl;
        else
            cout<<a[1]-1<<endl;
    }
    return 0;
}
