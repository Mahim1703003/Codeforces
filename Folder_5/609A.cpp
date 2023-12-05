#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,sum=0;
    cin>>n>>m;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    for(i=0;i<=n-1;i++)
    {
        sum=sum+a[i];
        if(sum>=m)
            break;
    }
    cout<<i+1<<endl;
    return 0;
}
