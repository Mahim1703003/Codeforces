#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int n,l=0,r=0,i;
    cin>>n>>s;
    for(i=0;i<=n-1;i++)
    {
        if(s[i]=='L')
            l--;
        else
            r++;
    }
    cout<<r-l+1<<"\n";
    return 0;
}
