#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s,s1;
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n = s.size();
        for(i=1;i<=n-2;i=i+2)
            s1 = s1 + s[i];
        s1 = s[0] + s1 + s[n-1];
        cout<<s1<<"\n";
        s1.clear();
    }
    return 0;
}
