#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q,n,i,k=0;
    cin>>q;
    while(q--)
    {
        cin>>n;
        int a[n+1];
        for(i=1;i<=n;i++)
            cin>>a[i];
        for(i=1;i<=n-1;i++)
        {
            if(abs(a[i]-a[i+1])>=2)
            {
                k++;
                break;
            }
        }
        if(k)
            cout<<"YES\n"<<i<<" "<<i+1<<"\n";
        else
            cout<<"NO\n";
        k = 0;
    }
    return 0;
}
