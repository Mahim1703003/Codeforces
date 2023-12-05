#include<iostream>
#include<map>
#include<iterator>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    map <int,int> m1,m2;
    map <int,int>::iterator it;
    map <int,string> m3,m4;
    map <int,string>::iterator it2;
    string s1,s2,subs;
    int n,m,k=0,i,x,sum=0,in,len;
    char ch;
    cin>>n>>m;
    int cn[n],dn[n],cm[m],dm[m];
    for(i=0;i<=n-1;i++)
    {
        cin>>cn[i]>>dn[i];
        m1[dn[i]]++;
        string s;
        stringstream ss;
        ss<<dn[i];
        s = ss.str();
        s = s + "-";
        m3[cn[i]] = m3[cn[i]] + s;
    }
    for(i=0;i<=m-1;i++)
    {
        cin>>cm[i]>>dm[i];
        m2[dm[i]]++;
        string s;
        stringstream ss;
        ss<<dm[i];
        s = ss.str();
        s = s + "-";
        m4[cm[i]] = m4[cm[i]] + s;
    }
    for(it=m1.begin();it!=m1.end();it++)
    {
        x = it->first;
        sum = sum + min(m1[x],m2[x]);
    }
    cout<<sum<<" ";
    /*for(it2=m3.begin();it2!=m3.end();it2++)
        cout<<it2->first<<" "<<it2->second<<"\n";
    cout<<"break\n";
    for(it2=m4.begin();it2!=m4.end();it2++)
        cout<<it2->first<<" "<<it2->second<<"\n";*/
    for(it2=m3.begin();it2!=m3.end();it2++)
    {
        x = it2->first;
        if(m4[x]!="")
        {
            s1 = m3[x];
            s2 = m4[x];
            while(s1!="")
            {
                in = s1.find_first_of("-");
                subs = s1.substr(0,in+1);
                s1.erase(0,in+1);
                if(s2.find(subs)==std::string::npos){
                    ///nothing happens
                }
                else
                {
                    k++;
                    in = s2.find(subs);
                    len = subs.size();
                    s2.erase(in,len);
                }
            }
        }
    }
    cout<<k<<"\n";
    return 0;
}
