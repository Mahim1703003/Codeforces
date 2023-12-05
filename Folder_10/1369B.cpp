#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s,s1,s2,s3;
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='1')
                s1 = s1 + '1';
            else
                break;
        }
        i++;
        for(j=0;j<=n-1;j++)
        {
            if(s[j]=='0')
                s2 = s2 + '0';
            else
                break;
        }
        j--;
        if(j+1==i)
            s3 = s2 + s1;
        else
            s3 = s2 + '0' + s1;
        cout<<s3<<"\n";
        s.clear();
        s1.clear();
        s2.clear();
        s3.clear();
    }
    return 0;
}
