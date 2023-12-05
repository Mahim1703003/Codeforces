#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[25];
    cin>>a;
    int n,i,ct=0;
    n=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='4'||a[i]=='7')
            ct++;
    }
    if(ct==4||ct==7)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
