#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,small=1000000001,i,k=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(a[i]<small)
            small = a[i];
    }
    for(i=0;i<=n-1;i++)
    {
        if(a[i]%small!=0)
        {
            k++;
            break;
        }
    }
    if(k==0)
        cout<<small<<"\n";
    else
        cout<<"-1\n";
    return 0;
}
