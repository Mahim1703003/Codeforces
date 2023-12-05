#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int n,i,a,k=0,f[10];
    char ch;
    cin>>n>>s;
    for(i=1;i<=9;i++)
        cin>>f[i];
    for(i=0;i<=n-1;i++)
    {
        a = s[i] - '0';
        if(f[a]>a)
        {
            k++;
            ch = f[a] + '0';
            s[i] = ch;
        }
        else if(f[a]==a)
        {
            if(k!=0)
            {
                k++;
                ch = f[a] + '0';
                s[i] = ch;
            }
        }
        else
        {
            if(k!=0)
                break;
        }
    }
    cout<<s<<"\n";
    return 0;
}
