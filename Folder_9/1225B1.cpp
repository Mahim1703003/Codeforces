#include<iostream>
#include<map>
using namespace std;
int main()
{
    map <int,int> m;
    int t,n,k,d,ans,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>d;
        int a[n];
        for(i=0;i<=n-1;i++)
            cin>>a[i];
        for(i=0;i<=n-d;i++)
        {
            for(j=i;j<=i+d-1;j++)
                m[a[j]]++;
            if(i==0)
                ans = m.size();
            else
            {
                if(m.size()<ans)
                    ans = m.size();
            }
            m.clear();
        }
        cout<<ans<<endl;
    }
    return 0;
}
