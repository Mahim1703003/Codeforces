#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int t,i,n,k=0;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n = s.size();
        for(i=0;i<=n-1;i++)
        {
            if(i==0 && s[i]=='?')
            {
                if(s[i+1]=='a')
                    s[i] = 'b';
                else if(s[i+1]=='b')
                    s[i] = 'c';
                else if(s[i+1]=='c')
                    s[i] = 'a';
                else if(s[i+1]=='?'||s[i+1]=='\0')
                    s[i] = 'a';
            }
            else if(i==n-1 && s[i]=='?')
            {
                if(s[i-1]=='a')
                    s[i] = 'b';
                else if(s[i-1]=='b')
                    s[i] = 'c';
                else if(s[i-1]=='c')
                    s[i] = 'a';
            }
            else
            {
                if(s[i]=='?')
                {
                    if(s[i-1]=='a' && s[i+1]=='a')
                        s[i] = 'b';
                    else if(s[i-1]=='a' && s[i+1]=='b')
                        s[i] = 'c';
                    else if(s[i-1]=='a' && s[i+1]=='c')
                        s[i] = 'b';
                    else if(s[i-1]=='a' && s[i+1]=='?')
                        s[i] = 'b';

                    else if(s[i-1]=='b' && s[i+1]=='a')
                        s[i] = 'c';
                    else if(s[i-1]=='b' && s[i+1]=='b')
                        s[i] = 'c';
                    else if(s[i-1]=='b' && s[i+1]=='c')
                        s[i] = 'a';
                    else if(s[i-1]=='b' && s[i+1]=='?')
                        s[i] = 'c';

                    if(s[i-1]=='c' && s[i+1]=='a')
                        s[i] = 'b';
                    else if(s[i-1]=='c' && s[i+1]=='b')
                        s[i] = 'a';
                    else if(s[i-1]=='c' && s[i+1]=='c')
                        s[i] = 'a';
                    else if(s[i-1]=='c' && s[i+1]=='?')
                        s[i] = 'a';

                }
            }
        }
        for(i=0;i<=n-2;i++)
        {
            if(s[i]==s[i+1])
            {
                k++;
                break;
            }
        }
        if(k==0)
            cout<<s<<endl;
        else
            cout<<-1<<endl;
        k = 0;
    }
    return 0;
}
