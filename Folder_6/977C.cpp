#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,k,i;
    cin>>n>>k;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    if(k!=0&&n!=1)
    {
        if(a[k-1]!=a[k]||k==n)
            cout<<a[k-1]<<endl;
        else
            cout<<"-1\n";
    }
    else if(k!=0&&n==1)
        cout<<a[k-1]<<endl;
    else if(k==0)
    {
        if(a[k]!=1)
            cout<<"1\n";
        else
            cout<<"-1\n";
    }
    return 0;
}
