#include<iostream>
#include<string>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <string,string> m,m2;
    map <string,string>::iterator it;
    int n,i;
    cin>>n;
    string str[n],s,s1,s2,x;
    for(i=0;i<=n-1;i++)
    {
        cin>>s1>>s2;
        str[i] = s1;
        m[s1] = s2;
    }
    for(i=0;i<=n-1;i++)
    {
        if(m[str[i]]!="")
        {
            s = m[str[i]];
            while(m[s]!="")
            {
                x = s;
                s = m[s];
                m.erase(x);
            }
            m2[str[i]] = s;
        }
    }
    cout<<m2.size()<<"\n";
    for(it=m2.begin();it!=m2.end();it++)
        cout<<it->first<<" "<<it->second<<"\n";
    return 0;
}
