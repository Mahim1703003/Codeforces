#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,i,x;
    long long int sum=0;
    cin>>n>>x;
    long long int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<=n-1;i++)
    {
        sum=sum+(x*a[i]);
        if(x>1)
            x--;
    }
    cout<<sum<<endl;
    return 0;
}
