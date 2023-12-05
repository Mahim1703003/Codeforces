#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s1,s2,s3;
    char ch;
    long long int a,b=0,c,i,x,r1,r2,rem;
    cin>>a>>c;
    if(a==0&&c==0)
    {
        cout<<"0\n";
        return 0;
    }
    while(a)
    {
        rem = a % 3;
        ch = rem + '0';
        s1 = ch + s1;
        a = a / 3;
    }
    while(c)
    {
        rem = c % 3;
        ch = rem + '0';
        s3 = ch + s3;
        c = c / 3;
    }
    if(s1.size()<s3.size())
    {
        r2 = s3.size();
        r1 = s1.size();
        for(i=1;i<=(r2-r1);i++)
            s1 = '0' + s1;
    }
    else
    {
        r2 = s1.size();
        r1 = s3.size();
        for(i=1;i<=(r2-r1);i++)
            s3 = '0' + s3;
    }
    for(i=0;i<=s1.size()-1;i++)
    {
        if(s1[i]=='0')
            s2 = s3[i] + s2;
        else if(s1[i]=='1')
        {
            if(s3[i]=='0')
                s2 = '2' + s2;
            else if(s3[i]=='1')
                s2 = '0' + s2;
            else
                s2 = '1' + s2;
        }
        else
        {
            if(s3[i]=='0')
                s2 = '1' + s2;
            else if(s3[i]=='1')
                s2 = '2' + s2;
            else
                s2 = '0' + s2;
        }
    }
    for(i=0;i<=s2.size()-1;i++)
    {
        x = s2[i] - '0';
        b = b + x*pow(3.0,i*1.0);
    }
    cout<<b<<"\n";
    return 0;
}
