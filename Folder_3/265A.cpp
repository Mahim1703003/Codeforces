#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,t;
    int i,k=0;
    cin>>s>>t;
    for(i=0;i<=t.length()-1;i++)
    {
        if(s[k]==t[i])
            k++;
    }
    cout<<k+1<<endl;
    return 0;
}
