#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,a,b,i;
    char ch='a';
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        for(i=1;i<=n;i++)
        {
            cout<<ch;
            if(i%b==0)
                ch = 'a';
            else
                ch++;
        }
        ch = 'a';
        cout<<"\n";
    }
    return 0;
}
