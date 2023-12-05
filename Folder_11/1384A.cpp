#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,len,in;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        string s[n+2];
        for(i=1;i<=n;i++)
            cin>>a[i];
        for(i=1;i<=n;i++)
        {
            if(i==1)
            {
                len = a[i];
                in = 0;
                if(len==0)
                {
                    s[i] = s[i] + alphabet[in];
                    continue;
                }
                while(s[i].size()!=len)
                {
                    s[i] = s[i] + alphabet[in];
                    in = (in+1)%26;
                }
            }
            else
            {
                len = max(a[i],a[i-1]);
                if(a[i-1]==0)
                {
                    in = s[i-1][0] - 'a';
                    in = (in+1) % 26;
                    if(len==0)
                        s[i] = s[i] + alphabet[in];
                    else
                    {
                        while(s[i].size()!=len)
                        {
                            s[i] = s[i] + alphabet[in];
                            in = (in+1)%26;
                        }
                    }
                    continue;
                }
                s[i] = s[i-1].substr(0,a[i-1]);
                if(s[i-1][a[i-1]]=='\0')
                    in = s[i-1][a[i-1]-1] - 'a';
                else
                    in = s[i-1][a[i-1]] - 'a';
                in = (in+1)%26;
                while(s[i].size()!=len)
                {
                    s[i] = s[i] + alphabet[in];
                    in = (in+1)%26;
                }
            }
        }
        if(a[i-1]==0)
        {
            in = s[i-1][0] - 'a';
            in = (in+1)%26;
            s[i] = s[i] + alphabet[in];
        }
        else
            s[i] = s[i-1].substr(0,a[i-1]);
        for(i=1;i<=n+1;i++)
            cout<<s[i]<<"\n";
    }
    return 0;
}
