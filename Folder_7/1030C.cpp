#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    bool res;
    int n,i,j,d,sum1=0,sum2=0;
    cin>>n>>s;
    for(i=0;i<=n-2;i++)
    {
        res = true;
        d = s[i] - '0';
        sum1 = sum1 + d;
        for(j=i+1;j<=n-1;j++)
        {
            d = s[j] - '0';
            sum2 = sum2 + d;
            if(sum2<sum1)
                res = false;
            else if(sum2==sum1)
            {
                res = true;
                if(j+1<=n-1)
                {
                    if(s[j+1]!='0')
                        sum2 = 0;
                }
            }
            else
            {
                res = false;
                break;
            }
        }
        if(res)
        {
            cout<<"YES\n";
            return 0;
        }
        sum2 = 0;
    }
    cout<<"NO\n";
    return 0;
}
