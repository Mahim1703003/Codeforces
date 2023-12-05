#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0,d1=0,d2,s,t;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        sum = sum + a[i];
    }
    cin>>s>>t;
    s--;
    t--;
    for(i=s;i!=t;i=(i+1)%n)
        d1 = d1 + a[i];
    d2 = sum - d1;
    cout<<min(d1,d2)<<endl;
    return 0;
}
