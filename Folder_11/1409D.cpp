#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s1,s2;
    long long int t,s,l,i,j,sum=0,in,d,n1,n2,ans;
    cin>>t;
    while(t--)
    {
        cin>>s1>>s;
        l = s1.size();
        s1 = '0' + s1;
        s2 = s1;
        for(i=0;i<=l;i++)
        {
            d = s1[i] - '0';
            sum = sum + d;
            if(sum<=s)
                in = i;
            else
                break;
        }
        if(in==l)
            cout<<"0\n";
        else
        {
            sum = 0;
            for(;in>=0;in--)
            {
                for(j=in+1;j<=l;j++)
                    s2[j] = '0';
                j = in;
                while(s2[j]=='9')
                {
                    s2[j] = '0';
                    j--;
                }
                s2[j]++;
                for(j=in;j>=0;j--)
                {
                    d = s2[j] - '0';
                    sum = sum + d;
                }
                if(sum<=s)
                    break;
                sum = 0;
                s2 = s1;
            }
            stringstream strs1(s1);
            strs1>>n1;
            stringstream strs2(s2);
            strs2>>n2;
            ans = n2 - n1;
            cout<<ans<<"\n";
        }
        sum = 0;
    }
    return 0;
}
