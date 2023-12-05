#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    map <int,int>::iterator it;
    int t,n,i,k=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        it = m.begin();
        for(i=0;i<=n-1;i++)
        {
            if(it->first<a[i])
            {
                k++;
                m[a[i]]--;
                if(m[a[i]]==0)
                    m.erase(a[i]);
            }
            else
            {
                m[a[i]]--;
                if(m[a[i]]==0)
                {
                    m.erase(a[i]);
                    it = m.begin();
                }
            }
        }
        cout<<k<<"\n";
        k = 0;
    }
    return 0;
}
