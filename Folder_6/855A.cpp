#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map <string,int> m;
    int n;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(m[s]==0)
        {
            cout<<"NO\n";
            m[s]++;
        }
        else
        {
            cout<<"YES\n";
            m[s]++;
        }
    }
    m.clear();
    return 0;
}
