#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int t,i,inpos=0,diff,max=0;
    cin>>t;
    while(t--)
    {
        cin>>s;
        s = " " + s;
        for(i=1;i<=s.size()-1;i++)
        {
            if(s[i]=='R')
            {
                diff = i - inpos;
                if(diff>max)
                    max = diff;
                inpos = i;
            }
        }
        diff = i - inpos;
        if(diff>max)
            max = diff;
        cout<<max<<"\n";
        inpos = 0;
        max = 0;
    }
    return 0;
}
