#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s1,s2;
    int t,n,i,k=0,in1,in2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s1>>s2;
        for(i=0;i<=n-1;i++)
        {
            if(s1[i]!=s2[i])
            {
                k++;
                if(k==1)
                    in1 = i;
                if(k==2)
                    in2 = i;
            }
        }
        if(k==2)
        {
            if(s1[in1]==s1[in2] && s2[in1]==s2[in2])
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else if(k==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        k = 0;
    }
    return 0;
}
