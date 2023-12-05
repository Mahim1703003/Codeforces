#include<iostream>
using namespace std;
int main()
{
    int n,c,i,k=0;
    cin>>n>>c;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=n-2;i++)
    {
        if(a[i]-a[i+1]>k)
            k=a[i]-a[i+1];
    }
    if(k-c>0)
        cout<<k-c<<endl;
    else
        cout<<"0\n";
    return 0;
}
