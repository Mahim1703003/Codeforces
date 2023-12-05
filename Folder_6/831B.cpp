#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    int i,j;
    for(i=0;i<=s3.length()-1;i++)
    {
        if(s3[i]>='0'&&s3[i]<='9')
            cout<<s3[i];
        else
        {
            for(j=0;j<=s1.length()-1;j++)
            {
                if(s3[i]==s1[j]||s3[i]+32==s1[j])
                {
                    if(s3[i]>='a'&&s3[i]<='z')
                        cout<<s2[j];
                    else
                    {
                        s2[j] = s2[j] - 32;
                        cout<<s2[j];
                        s2[j] = s2[j] + 32;
                    }
                }
            }
        }
    }
    cout<<endl;
    return 0;

}
