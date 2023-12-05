#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    int n,i,stay=0,ans;
    cin>>n;
    int r[n];
    char ch[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>ch[i]>>r[i];
        if(ch[i]=='+')
            m[r[i]]++;
        else
        {
            if(m[r[i]]==1)
                m[r[i]]--;
            else
                stay++;
        }
    }
    ans = stay;
    for(i=0;i<=n-1;i++)
    {
        if(ch[i]=='+')
            stay++;
        else
            stay--;
        ans = max(ans,stay);
    }
    cout<<ans<<"\n";
    return 0;
}
