#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int n,i=0,div;
    cin>>n>>s;
    div = n / 2;
    div--;
    while(div--)
    {
        cout<<s[i]<<s[i+1]<<"-";
        i = i + 2;
    }
    for(;i<=s.size()-1;i++)
        cout<<s[i];
    cout<<"\n";
    return 0;
}

