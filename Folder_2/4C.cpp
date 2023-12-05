#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n,i;
    string s;
    map <string,int> m;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        if(m[s]==0)
        {
            cout<<"OK\n";
            m[s]++;
        }
        else
        {
            cout<<s<<m[s]<<endl;
            m[s]++;
        }
    }
    return 0;
}
