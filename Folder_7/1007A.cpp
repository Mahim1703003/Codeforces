#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,j,k=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    i = n-1;
    j = n-2;
    for(;j>=0;j--)
    {
        if(a[j]<a[i])
        {
            i--;
            k++;
        }
    }
    cout<<k<<"\n";
    return 0;
}
