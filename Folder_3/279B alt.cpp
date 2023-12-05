#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,t;
    long long int sum=0;
    cin>>n>>t;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<=n-1;i++)
    {
        sum=sum+a[i];
        if(sum>t)
            break;
    }
    cout<<i<<endl;
    return 0;
}
