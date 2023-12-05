#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int sum=0,n,i,k;
    cin>>n;
    k=n;
    long long int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    for(i=0;i<=n-1;i++)
    {
        if(i>1)
            k--;
        sum=sum+a[i]*k;
    }
    cout<<sum<<endl;
    return 0;
}
