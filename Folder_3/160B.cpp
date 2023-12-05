#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j,k=0,f=0;
    cin>>n;
    char a[n],b[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=n-1;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]>b[i])
            k++;
        else if(a[i]<b[i])
            f++;
    }
    if(k==n||f==n)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
