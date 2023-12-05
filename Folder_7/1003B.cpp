#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int a,b,x,i;
    cin>>a>>b>>x;
    if(a>=b)
    {
        for(i=0;i<=x;i++)
        {
            if(i%2==0)
            {
                s = s + '0';
                a--;
            }
            else
            {
                s = s + '1';
                b--;
            }
        }
        if(x%2==1)
        {
            while(a--)
                s = '0' + s;
            while(b--)
                s = s + '1';
        }
        else
        {
            if(b!=0)
            {
                s[x] = '1';
                b--;
                while(b--)
                    s = s + '1';
                s = s + '0';
            }
            while(a--)
                s = '0' + s;
        }
    }
    else
    {
        for(i=0;i<=x;i++)
        {
            if(i%2==0)
            {
                s = s + '1';
                b--;
            }
            else
            {
                s = s + '0';
                a--;
            }
        }
        if(x%2==1)
        {
            while(b--)
                s = '1' + s;
            while(a--)
                s = s + '0';
        }
        else
        {
            if(a!=0)
            {
                s[x] = '0';
                a--;
                while(a--)
                    s = s + '0';
                s = s + '1';
            }
            while(b--)
                s = '1' + s;
        }
    }
    cout<<s<<"\n";
    return 0;
}
