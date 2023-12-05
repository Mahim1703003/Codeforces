#include<iostream>
#include<string>
using namespace std;
int main()
{
    int odd=0,i,a[26]={0},x;
    string s;
    cin>>s;
    for(i=0;i<=s.size()-1;i++)
    {
        x = s[i] - 'a';
        a[x]++;
    }
    for(i=0;i<=25;i++)
    {
        if(a[i]%2==1)
            odd++;
    }
    if(odd%2==1||odd==0)
        cout<<"First\n";
    else
        cout<<"Second\n";

    return 0;
}
