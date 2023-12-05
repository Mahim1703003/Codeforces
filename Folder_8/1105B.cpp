#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <char,int> m;
    string s;
    int n,k,i,x=1,max=0;
    cin>>n>>k>>s;
    for(i=0;i<=n-1;i++)
    {
        if(s[i]==s[i+1])
            x++;
        else
        {
            if(x>=k)
            {
                m[s[i]] = m[s[i]] + x/k;
                if(m[s[i]]>max)
                    max = m[s[i]];
            }
            x = 1;
        }
    }
    cout<<max<<"\n";
    return 0;
}
