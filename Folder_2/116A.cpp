#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n],b[n],c[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i]>>b[i];
    c[0] = b[0];
    for(i=1;i<=n-1;i++)
        c[i] = c[i-1] - a[i] + b[i];
    sort(c,c+n);
    cout<<c[n-1]<<endl;
    return 0;
}
