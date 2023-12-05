#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,min_diff;
    cin>>n>>m;
    int a[m+1];
    for(i=1;i<=m;i++)
        cin>>a[i];
    sort(a+1,a+m+1);
    for(i=1;i<=m-n+1;i++)
    {
        if(i==1)
            min_diff = a[i+n-1] - a[i];
        if((a[i+n-1] - a[i])<min_diff)
            min_diff = a[i+n-1] - a[i];
    }

    cout<<min_diff<<endl;

    return 0;
}
