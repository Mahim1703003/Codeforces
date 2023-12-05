#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    int n,i,ct1,ct2,sum1=0,sum2=0,x;
    cin>>n;
    cin>>s;
    ct1 = count(s.begin(),s.end(),'4');
    ct2 = count(s.begin(),s.end(),'7');
    if(ct1+ct2==n)
    {
        for(i=0;i<=n/2-1;i++)
        {
            x = s[i] - '0';
            sum1 = sum1 + x;
        }
        for(i=n/2;i<=n-1;i++)
        {
            x = s[i] - '0';
            sum2 = sum2 + x;
        }
        if(sum1==sum2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else
        cout<<"NO\n";
    return 0;
}
