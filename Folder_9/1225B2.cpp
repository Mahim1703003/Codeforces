#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    int t,n,k,d,i,j,min_show,show=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>d;
        int a[n+1];
        for(i=1;i<=n;i++)
            cin>>a[i];
        for(i=1;i<=d;i++)
        {
            if(m[a[i]]==0)
                show++;
            m[a[i]]++;
        }
        min_show = show;
        for(i=2,j=d+1;i<=n-d+1;i++,j++)
        {
            m[a[i-1]]--;
            if(m[a[i-1]]==0)
                show--;
            if(m[a[j]]==0)
                show++;
            m[a[j]]++;
            min_show = min(min_show,show);
        }
        cout<<min_show<<"\n";
        m.clear();
        show = 0;
    }
    return 0;
}
