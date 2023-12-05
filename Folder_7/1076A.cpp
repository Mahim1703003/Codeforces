#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int n,i,j,k=0;
    cin>>n;
    cin>>s;
    for(i=0;i<=n-2;i++)
    {
        if(s[i]>s[i+1])
        {
            s.erase(i,1);
            cout<<s<<"\n";
            return 0;
        }
    }
    s.erase(n-1,1);
    cout<<s<<"\n";
    return 0;
}
