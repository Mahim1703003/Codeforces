#include<iostream>
using namespace std;
int main()
{
    int n,k,i,ct=0;
    string s;
    cin>>n>>k;
    cin>>s;
    for(i=0;i<=n-1;i++)
    {
        if(ct==k)
            break;
        if(i==0 && i!=n-1)
        {
            if(s[i]!='1')
            {
                s[i] = '1';
                ct++;
            }
        }
        else
        {
            if(s[i]!='0')
            {
                s[i] = '0';
                ct++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
