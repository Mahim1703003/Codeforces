#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,x,ma,mi,k=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i]>>b[i];
    for(i=0;i<=n-1;i++)
    {
        if(i==0)
            x = max(a[i],b[i]);
        else
        {
            ma = max(a[i],b[i]);
            mi = min(a[i],b[i]);
            if(x>=ma)
                x = ma;
            else if(x>=mi)
                x = mi;
            else
            {
                k++;
                break;
            }
        }
    }
    if(k!=0)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}
