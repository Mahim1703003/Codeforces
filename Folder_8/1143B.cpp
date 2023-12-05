#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    long long int a,b,c,d,i,ct=0,mult=1,l;
    cin>>s;
    if(s.size()==1)
        cout<<s<<"\n";
    else
    {
        l = s.size();
        a = s[0] - '0';
        b = s[1] - '0';
        if(a-1>=1)
            c = a - 1;
        else
            c = 1;
        d = 9;
        if(a*b<=c*d)
        {
            mult = c * d;
            for(i=1;i<=l-2;i++)
                mult = mult * 9;
        }
        else
        {
            for(i=2;i<=l-1;i++)
            {
                if(s[i]=='9')
                    ct++;
            }
            if(ct!=l-2)
            {
                if(a*(b-1)>=((a-1)*9))
                    mult = a*(b-1);
                else
                    mult = (a-1)*9;
            }
            else
                mult = a * b;
            for(i=1;i<=l-2;i++)
                mult = mult * 9;
        }
        cout<<mult<<"\n";
    }
    return 0;
}
