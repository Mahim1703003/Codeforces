#include<iostream>
#include<string>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    /* just checked the map
    map <string,string> m;
    map <string,string>::iterator it;
    m["mahim"] = "hsagas";
    m["zihan"] = "goofboy";
    for(it=m.begin();it!=m.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    */
    map <string,string> ma;
    int n,m,i,p;
    string s,subs,s1,s2;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>s1>>s2;
        ma[s2] = s1;
    }
    for(i=1;i<=m;i++)
    {
        cin>>s1>>s2;
        subs = s2.substr(0,s2.size()-1);
        cout<<s1<<" "<<s2<<" #"<<ma[subs]<<endl;
    }
    return 0;
}
