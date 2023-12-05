#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <string,int> m;
    string s1,s2,str1,str2,sp,ans;
    int n,l,i;
    cin>>n>>l;
    string s[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>s[i];
        m[s[i]]++;
    }
    for(i=0;i<=n-1;i++)
    {
        s1 = s[i];
        s2 = s1;
        reverse(s2.begin(),s2.end());
        if(m[s1]==1 && m[s2]==1)
        {
            if(s1!=s2)
            {
                str1 = str1 + s1;
                str2 = s2 + str2;
                m.erase(s1);
                m.erase(s2);
            }
            else
            {
                sp = s1;
                m.erase(s1);
            }
        }
    }
    ans = str1 + sp + str2;
    cout<<ans.size()<<"\n"<<ans<<"\n";
    return 0;
}
