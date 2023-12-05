#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int i,k,ch=0,candy=0,snow=0,ct=0,extra;
    cin>>s>>k;
    for(i=0;i<=s.size()-1;i++)
    {
        if(s[i]=='*')
            snow++;
        else if(s[i]=='?')
            candy++;
        else
            ch++;
    }
    if(ch==k)
    {
        for(i=0;i<=s.size()-1;i++)
        {
            if(s[i]>='a'&&s[i]<='z')
                cout<<s[i];
        }
        cout<<"\n";
    }
    else if(ch>k)
    {
        extra = ch - k;
        if(candy+snow>=extra)
        {
            for(i=s.size()-1;i>=0;i--)
            {
                if(s[i]=='*'||s[i]=='?')
                {
                    ct++;
                    if(ct<=extra)
                        s[i-1] = '1';
                }
            }
            for(i=0;i<=s.size()-1;i++)
            {
                if(s[i]>='a'&&s[i]<='z')
                    cout<<s[i];
            }
            cout<<"\n";
        }
        else
            cout<<"Impossible\n";
    }
    else
    {
        extra = k - ch;
        if(snow!=0)
        {
            for(i=0;i<=s.size()-1;i++)
            {
                if(s[i]=='*'&&ct==0)
                {
                    ct++;
                    while(extra--)
                        cout<<s[i-1];
                }
                else if(s[i]>='a'&&s[i]<='z')
                    cout<<s[i];
            }
            cout<<"\n";
        }
        else
            cout<<"Impossible\n";
    }
    return 0;
}
