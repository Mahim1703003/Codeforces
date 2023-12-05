#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,k=0;
    cin>>n;
    int a[n],b[1001]={0};
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    k = n / 2;
    if(n%2!=0)
        k++;
    sort(b,b+1001,greater<int>());
    if(b[0]<=k)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}
