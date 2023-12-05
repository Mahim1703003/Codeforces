#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string n;
    int l,a,b;
    cin>>n;
    l=n.size();
    if(l==1)
    {
        if(n[0]=='4'||n[0]=='8'||n[0]=='0')
            cout<<"4\n";
        else
            cout<<"0\n";
    }
    else
    {
        a=n[l-2]-'0';
        b=n[l-1]-'0';
        if((a*10+b)%4==0)
            cout<<"4\n";
        else
            cout<<"0\n";
    }
    return 0;
}
