#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m1,m2;
    int t,n,i,k=0,m=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            m1[a[i]]++;
            if(m1[a[i]]>=3)
                k++;
            if(i==0)
                m2[a[i]]++;
            else
            {
                if(a[i]!=a[i-1])
                    m2[a[i]]++;
                if(m2[a[i]]>=2)
                    m++;
            }
        }
        if(k!=0 || m!=0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        m1.clear();
        m2.clear();
        k = 0;
        m = 0;
    }
    return 0;
}
