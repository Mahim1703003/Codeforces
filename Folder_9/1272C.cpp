#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    map <char,int> m;
    long long int n,k,i,ct=0,sum=0;
    char ch;
    cin>>n>>k;
    cin>>s;
    for(i=1;i<=k;i++)
    {
        cin>>ch;
        m[ch]++;
    }
    for(i=0;i<=n-1;i++)
    {
        if(m[s[i]]!=0)
        {
            ct++;
            if(i==n-1)
                sum = sum + ((ct*(ct+1))/2);
        }
        else
        {
            sum = sum + ((ct*(ct+1))/2);
            ct = 0;
        }
    }
    cout<<sum<<"\n";
    return 0;
}
