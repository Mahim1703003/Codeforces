#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,ans1,ans2,ans;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    ans1=a[n-2]-a[0];
    ans2=a[n-1]-a[1];
    ans=(ans1<ans2)?ans1:ans2;
    cout<<ans<<endl;
    return 0;
}
