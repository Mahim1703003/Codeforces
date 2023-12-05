#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s,s1,s2;
    int k,len,i,f=0;
    cin>>s>>k;
    if(s.size()%k==0)
    {
        len = s.size() / k;
        while(s.size()!=0)
        {
            s1 = s.substr(0,len);
            s2 = s1;
            reverse(s2.begin(),s2.end());
            if(s1!=s2)
                f++;
            s.erase(0,len);
        }
        if(f==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else
        cout<<"NO\n";
    return 0;
}
