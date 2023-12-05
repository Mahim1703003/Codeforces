#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <char,int> ms;
    string s;
    int t,n,m,i,x=-1;
    char ch;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>s;
        s = " " + s;
        int a[m],b[n+1]={0};
        for(i=0;i<=m-1;i++)
            cin>>a[i];
        sort(a,a+m);
        for(i=0;i<=m-1;i++)
        {
            if(b[a[i]]==0)
                b[a[i]] = m - i;
        }
        for(i=n;i>=1;i--)
        {
            if(b[i]==0)
            {
                if(x==-1)
                    continue;
                b[i] = x;
            }
            else
                x = b[i];
        }
        for(i=1;i<=n;i++)
            ms[s[i]] = ms[s[i]] + b[i];
        for(i=1;i<=n;i++)
            ms[s[i]]++;
        for(ch='a';ch<='z';ch++)
            cout<<ms[ch]<<" ";
        cout<<"\n";
        x = -1;
        ms.clear();
    }
    return 0;
}
