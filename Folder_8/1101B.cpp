#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int n,i,p1=-1,p2=-1,p3=-1,p4=-1,k=0;
    cin>>s;
    n = s.size();
    for(i=0;i<=n-1;i++)
    {
        if(s[i]=='[')
        {
            p1 = i;
            break;
        }
    }
    if(p1==-1)
        cout<<"-1\n";
    else
    {
        for(i=n-1;i>=0;i--)
        {
            if(s[i]==']')
            {
                p4 = i;
                break;
            }
        }
        if(p4<p1)
            cout<<"-1\n";
        else
        {
            for(i=p1;i<=p4;i++)
            {
                if(s[i]==':')
                {
                    p2 = i;
                    break;
                }
            }
            for(i=p4;i>=p1;i--)
            {
                if(s[i]==':')
                {
                    p3 = i;
                    break;
                }
            }
            if(p3<=p2)
                cout<<"-1\n";
            else
            {
                for(i=p2;i<=p3;i++)
                {
                    if(s[i]=='|')
                        k++;
                }
                cout<<4+k<<"\n";
            }
        }
    }
    return 0;
}
