#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int n,i,st=0,ct=0;
    char ch1='0',ch2='0';
    cin>>n>>s;
    for(i=0;i<=n-1;i++)
    {
        ct++;
        if(s[i]=='L'||s[i]=='R')
        {
            ct--;
            if(ch1=='0')
            {
                ch1 = s[i];
                if(ch1=='R')
                    st = st + ct;
            }
            else
            {
                if(ch2=='0')
                    ch2 = s[i];
                else
                {
                    ch1 = ch2;
                    ch2 = s[i];
                }
                if(ch1=='L'&&ch2=='R')
                    st = st + ct;
                else if(ch1=='R'&&ch2=='L')
                {
                    if(ct%2==1)
                        st++;
                }
            }
            ct = 0;
        }
    }
    if(ct!=0)
    {
        if(ch1=='0')
            st = st + ct;
        else
        {
            if(ch2=='0')
                ch2 = ch1;
            if(ch2=='L')
                st = st + ct;
        }
    }
    cout<<st<<"\n";
    return 0;
}
