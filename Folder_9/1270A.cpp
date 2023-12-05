#include<iostream>
using namespace std;
int main()
{
    int t,n,k1,k2,i,x,m1=0,m2=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k1>>k2;
        for(i=1;i<=k1;i++)
        {
            cin>>x;
            if(x>m1)
                m1 = x;
        }
        for(i=1;i<=k2;i++)
        {
            cin>>x;
            if(x>m2)
                m2 = x;
        }
        if(m1>m2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        m1 = 0;
        m2 = 0;
    }
    return 0;
}
