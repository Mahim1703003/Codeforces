#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    long long int t,n,i,sum=0,sum1=0;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n = s.size();
        s = " " + s;
        for(i=1;i<=n;i++)
        {
            sum1++;
            if(s[i]=='-')
                sum--;
            else
                sum++;
            if(sum<0)
            {
                sum1 = sum1 + i;
                sum = 0;
            }
        }
        cout<<sum1<<"\n";
        sum = 0;
        sum1 = 0;
    }
    return 0;
}
