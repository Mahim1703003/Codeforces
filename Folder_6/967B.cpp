#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,A,B,i;
    double sum=0,ans;
    cin>>n>>A>>B;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        sum = sum + a[i]*1.0;
    }
    sort(a+1,a+n,greater<int>());
    for(i=0;i<=n-1;i++)
    {
        if(i!=0)
            sum = sum - a[i]*1.0;
        ans = (a[0]*1.0*A*1.0) / sum;
        if(ans>=B)
            break;
    }
    cout<<i<<"\n";
    return 0;
}
