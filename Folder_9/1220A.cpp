#include<iostream>
#include<string>
using namespace std;
int main()
{
    int l,i,z=0,n=0;
    cin>>l;
    string s;
    cin>>s;
    for(i=0;i<=l-1;i++)
    {
        if(s[i]=='z')
            z++;
        else if(s[i]=='n')
            n++;
    }
    for(i=1;i<=n;i++)
        cout<<"1 ";
    for(i=1;i<=z;i++)
        cout<<"0 ";
    cout<<endl;

    return 0;
}
