#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <char,int> m1,m2;
    string s;
    int n,k,i,available=0,ct=0;
    cin>>n>>k;
    cin>>s;
    for(i=0;i<=n-1;i++)
        m1[s[i]]++;
    for(i=0;i<=n-1;i++)
    {
        m2[s[i]]++;
        if(m2[s[i]]==1)
        {
            if(available==0)
                ct++;
            else
                available--;

        }
        if(m2[s[i]]==m1[s[i]])
            available++;
    }
    if(ct<=k)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}
