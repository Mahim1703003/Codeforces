#include<iostream>
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
    for(i=1;i<=1001;i++)
    {
        for(j=0;j<=n-1;j++)
            a[j]--;
        if(a[0]<0 || a[n-1]<0)
            break;
        for(j=0;j<=n-2;j++)
        {
            if(a[j]<0 && a[j+1]<0)
            {
                k++;
                break;
            }
        }
        if(k!=0)
            break;
    }
    cout<<i-1<<"\n";
    return 0;
}
