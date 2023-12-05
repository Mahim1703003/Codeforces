#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,k=0;
    char ch;
    string s;
    cin>>s;
    for(i=0;i<=s.size()-1;i++)
    {
        if(i==0)
            ch = s[i];
        else
        {
            if(s[i]>ch)
                ch = s[i];
        }
    }
    for(i=0;i<=s.size()-1;i++)
    {
        if(s[i]==ch)
            k++;
    }
    while(k--)
        cout<<ch;
    cout<<endl;
    return 0;
}
