#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,k=0;
    for(i=0;i<=s.length()-1;i++)
    {
        if(s[i]=='n'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            continue;
        else
        {
            if(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u')
                i++;
            else
                k++;
        }
    }
    if(k==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
