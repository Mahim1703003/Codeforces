#include<iostream>
using namespace std;
int main()
{
    int t,n,i,max=0,ct=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            if(a[i]>max)
                max = a[i];
        }
        for(i=0;i<=n-1;i++)
        {
            if((max-a[i])%2==0)
                ct++;
        }
        if(ct==n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        max = 0;
        ct = 0;
    }
    return 0;
}
