#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,ct=0,k=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    while(1)
    {
        for(i=0;i<=n-1;i++)
        {
            if(a[i]==-1)
                continue;
            if(a[i]<=ct)
            {
                ct++;
                a[i] = -1;
            }
        }
        if(ct==n)
            break;
        else
            k++;
        for(i=n-1;i>=0;i--)
        {
            if(a[i]==-1)
                continue;
            if(a[i]<=ct)
            {
                ct++;
                a[i] = -1;
            }
        }
        if(ct==n)
            break;
        else
            k++;
    }
    cout<<k<<"\n";
    return 0;
}
