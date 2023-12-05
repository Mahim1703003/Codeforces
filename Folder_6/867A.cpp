#include<iostream>
using namespace std;
int main()
{
    int n,i,k=0,l=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<=n-1;i++)
    {
        if(s[i]=='S'&&s[i+1]=='F')
            k++;
        if(s[i]=='F'&&s[i+1]=='S')
            l++;
    }
    if(k>l)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
