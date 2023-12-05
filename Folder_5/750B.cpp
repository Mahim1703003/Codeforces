#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int n,i,d,sum=0,f=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>d>>s;
        if(sum>=0 && sum<=20000)
        {
            if(sum==0)
            {
                if(s=="South")
                    sum = sum + d;
                else
                    f++;
            }
            else if(sum==20000)
            {
                if(s=="North")
                    sum = sum - d;
                else
                    f++;
            }
            else
            {
                if(s=="South")
                    sum = sum + d;
                else if(s=="North")
                    sum = sum - d;
            }
        }
        else
            f++;
    }
    if(f!=0)
        cout<<"NO\n";
    else
    {
        if(sum==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
