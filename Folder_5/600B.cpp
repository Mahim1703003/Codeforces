#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,i,left,right,mid,k=0;
    cin>>n>>m;
    int a[n],b[m];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=m-1;i++)
        cin>>b[i];
    sort(a,a+n);
    for(i=0;i<=m-1;i++)
    {
        left = 0;
        right = n-1;
        while(left<=right)
        {
            mid = (left+right) / 2;
            if(b[i]<a[mid])
                right = mid - 1;
            else if(b[i]>=a[mid])
                left = mid + 1;
        }
        cout<<right+1<<" ";
    }
    return 0;
}
