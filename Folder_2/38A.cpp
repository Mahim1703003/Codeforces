#include<iostream>
using namespace std;
int main()
{
    int n,a,b,i,sum=0;
    cin>>n;
    int r[n-1];
    for(i=0;i<=n-2;i++)
        cin>>r[i];
    cin>>a>>b;
    for(i=a-1;i<=b-2;i++)
        sum=sum+r[i];
    cout<<sum<<endl;
    return 0;
}
