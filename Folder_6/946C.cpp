#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int n,i,j,k=0,ct=0;
    char ch='a';
    cin>>s;
    n = s.size();
    for(i=0;i<=n-1;i++)
    {
        if(s[i]<=ch)
        {
            s[i] = ch;
            k++;
            ch++;
        }
        if(k==26)
        {
            cout<<s<<"\n";
            return 0;
        }
    }
    cout<<"-1\n";
    return 0;
}
