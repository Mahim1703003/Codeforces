#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,n,i,even=0,odd=0,p;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        for(i=0;i<=n-1;i++)
        {
            if(s[i]=='2'||s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='0')
                even++;
            else
                odd++;
        }
        if(odd==0)
            cout<<-1<<endl;
        else
        {
            if(s[n-1]=='2'||s[n-1]=='4'||s[n-1]=='6'||s[n-1]=='8'||s[n-1]=='0')
            {
                p = s.find_last_of("13579");
                s.erase(p+1);
                if(odd%2==0)
                {
                    if(s[0]!='0')
                        cout<<s<<endl;
                    else
                    {
                        p = s.find_first_of("123456789");
                        s.erase(0,p);
                        cout<<s<<endl;
                    }
                }
                else
                {
                    if(odd==1)
                        cout<<-1<<endl;
                    else
                    {
                        p = s.find_first_of("13579");
                        s.erase(p,1);
                        if(s[0]!='0')
                            cout<<s<<endl;
                        else
                        {
                            p = s.find_first_of("123456789");
                            s.erase(0,p);
                            cout<<s<<endl;
                        }
                    }
                }
            }
            else
            {
                if(odd%2==0)
                {
                    if(s[0]!='0')
                        cout<<s<<endl;
                    else
                    {
                        p = s.find_first_of("123456789");
                        s.erase(0,p);
                        cout<<s<<endl;
                    }
                }
                else
                {
                    if(odd==1)
                        cout<<-1<<endl;
                    else
                    {
                        p = s.find_first_of("13579");
                        s.erase(p,1);
                        if(s[0]!='0')
                            cout<<s<<endl;
                        else
                        {
                            p = s.find_first_of("123456789");
                            s.erase(0,p);
                            cout<<s<<endl;
                        }
                    }
                }
            }
        }
        even = 0;
        odd = 0;
    }
    return 0;
}
