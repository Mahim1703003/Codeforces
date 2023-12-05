#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s1,s2,s3;
    int i,ct1=0,ct2=0,ct3=0;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    for(i=0;i<=s1.size()-1;i++)
    {
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
            ct1++;
    }
    for(i=0;i<=s2.size()-1;i++)
    {
        if(s2[i]=='a'||s2[i]=='e'||s2[i]=='i'||s2[i]=='o'||s2[i]=='u')
            ct2++;
    }
    for(i=0;i<=s3.size()-1;i++)
    {
        if(s3[i]=='a'||s3[i]=='e'||s3[i]=='i'||s3[i]=='o'||s3[i]=='u')
            ct3++;
    }
    if(ct1==5 && ct2==7 && ct3==5)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
