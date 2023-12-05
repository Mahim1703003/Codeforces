#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    char c1,c2,c3,c4;
    int i,k=0;
    cin>>s1>>s2;
    if(s1.size()==s2.size())
    {
        for(i=0;i<=s1.size()-1;i++)
        {
            if(s1[i]!=s2[i])
            {
                k++;
                if(k==1)
                {
                    c1 = s1[i];
                    c2 = s2[i];
                }
                else if(k==2)
                {
                    c3 = s1[i];
                    c4 = s2[i];
                }
            }
        }
        if(k!=2)
            cout<<"NO\n";
        else
        {
            if(c1==c4 && c3==c2)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    else
        cout<<"NO\n";
    return 0;
}
