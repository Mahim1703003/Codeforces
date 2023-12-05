#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int t,n,i,j,l,m,k=0;
    string s,sr;
    cin>>t;
    for(l=1;l<=t;l++)
    {
        cin>>n;
        cin>>s;
        sr = s;
        reverse(sr.begin(),sr.end());
        if(s==sr)
            cout<<"YES\n";
        else
        {
            for(i=0,j=n-1,m=1;m<=n/2;i++,j--,m++)
            {
                if(s[i]==s[j])
                    k++;
                else if((s[i]=='a'&&s[j]=='z')||(s[i]=='z'&&s[j]=='a'))
                    break;
                else if((s[i]+1==s[j]-1)||(s[i]+1==s[j]+1)||(s[i]-1==s[j]+1)||(s[i]-1==s[j]-1))
                    k++;
            }
            if(2*k==n)
                cout<<"YES\n";
            else
                cout<<"NO\n";
            k = 0;
        }
    }
    return 0;
}
