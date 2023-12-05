#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int q,n,k,i,min,ans,ct=0;
    cin>>q;
    while(q--)
    {
        cin>>n>>k;
        int a[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            if(i==0)
                min = a[i];
            else
            {
                if(a[i]<min)
                    min = a[i];
            }
        }
        ans = min + k;
        for(i=0;i<=n-1;i++)
        {
            if(abs(ans-a[i])<=k)
                ct++;
        }
        if(ct==n)
            cout<<ans<<endl;
        else
            cout<<-1<<endl;
        ct = 0;
    }
    return 0;
}
