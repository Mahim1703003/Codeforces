#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s,s1,s2;
    int t,i,n,k=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        for(i=0;i<=n-1;i++)
        {
            if(s[i]=='2')
            {
                if(k==0)
                {
                    s1 = s1 + '1';
                    s2 = s2 + '1';
                }
                else
                {
                    s1 = s1 + '0';
                    s2 = s2 + '2';
                }
            }
            else if(s[i]=='1')
            {
                k++;
                if(k==1)
                {
                    s1 = s1 + '1';
                    s2 = s2 + '0';
                }
                else
                {
                    s1 = s1 + '0';
                    s2 = s2 + '1';
                }
            }
            else
            {
                s1 = s1 + '0';
                s2 = s2 + '0';
            }
        }
        cout<<s1<<"\n"<<s2<<"\n";
        s1.clear();
        s2.clear();
        k = 0;
    }
    return 0;
}
