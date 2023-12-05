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
        int a[2*n];
        for(i=0;i<=2*n-1;i++)
            cin>>a[i];
        sort(a,a+2*n);
        cout<<a[n]-a[n-1]<<endl;
    }
    return 0;
}
