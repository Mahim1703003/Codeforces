#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string t,s,s1,s2,s3,s4;
    int i,ct=0;
    cin>>t;
    for(i=0;i<=t.size()-1;i++)
    {
        if(t[i]!='a')
            s = s + t[i];
        else
            ct++;
    }
    if(s.size()==0)
        cout<<t<<"\n";
    else if(s.size()%2==0)
    {
        /*for(i=0;i<=s.size()-1;i++)
        {
            if(i<=s.size()/2-1)
                s1 = s1 + s[i];
            else
                s2 = s2 + s[i];
        }*/
        s1 = s.substr(0,s.size()/2);
        ///for(i=s.size()/2;i<=s.size()-1;i++)
            ///s2 = s2 + s[i];
        s2 = s.substr(s.size()/2);
        if(s1==s2)
        {
            /*for(i=0;i<=ct+s1.size()-1;i++)
                s3 = s3 + t[i];*/
            s3 = t.substr(0,ct+s1.size());
            s4 = s3 + s2;
            if(s4==t)
                cout<<s3<<"\n";
            else
                cout<<":(\n";
        }
        else
            cout<<":(\n";
    }
    else
        cout<<":(\n";
    return 0;
}
