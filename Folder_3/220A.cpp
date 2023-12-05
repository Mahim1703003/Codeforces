#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,k=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
    sort(b,b+n);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]!=b[i])
            k++;
    }
    if(k<=2)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
