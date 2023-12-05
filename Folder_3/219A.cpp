#include<iostream>
#include<string>
using namespace std;
int main()
{
    /*string s;
    char ch = 'a';
    s = s + ch;
    cout<<s<<endl;
    s = s + ch;
    cout<<s<<endl;
    char c;
    c = 65;
    cout<<c<<endl;
    int n;
    n = 'z' - 'a';
    cout<<n;*/
    int n,i,j,x,k=0,a[26]={0};
    cin>>n;
    char ch;
    string s,s1;
    cin>>s;
    for(i=0;i<=s.size()-1;i++)
    {
        x = s[i] - 'a';
        a[x]++;
    }
    for(i=0;i<=25;i++)
    {
        if(a[i]!=0)
        {
            if(a[i]%n!=0)
                k++;
        }
    }
    if(k!=0)
        cout<<"-1\n";
    else
    {
        for(i=0;i<=25;i++)
        {
            if(a[i]!=0)
            {
                ch = 97 + i;
                for(j=1;j<=a[i]/n;j++)
                    s1 = s1 + ch;
            }
        }
        for(i=1;i<=n;i++)
            cout<<s1;
        cout<<endl;
    }
    return 0;

}
