#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,i,k=0;
    cin>>n;
    int a[n],b[n];
    memset(b,0,sizeof(b));
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    for(i=0;i<=n-1;i++)
    {
        if((n-b[a[i]])==a[i])
            k++;
    }
    if(k==n)
    {
        cout<<"Possible\n";
        for(i=0;i<=n-1;i++)
            cout<<a[i]+1<<" ";
    }
    else
        cout<<"Impossible\n";
    return 0;
}
