#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,ct=0,max_length=0,j,k=0,word=0;
    string s;
    cin>>n>>s;
    for(i=0;i<=n-1;i++)
    {
        if(s[i]!='_' && s[i]!='(')
        {
            ct++;
            if(i==n-1)
            {
                if(ct>max_length)
                {
                    max_length = ct;
                    ct=0;
                }
            }
        }
        else
        {
            if(ct>max_length)
                max_length = ct;
            ct = 0;
            if(s[i]=='(')
            {
                for(j=i+1;j<=n-1;j++)
                {
                    if(s[j]!='_' && s[j]!=')')
                        k++;
                    else
                    {
                        if(k>0)
                            word++;
                        k = 0;
                        if(s[j]==')')
                        {
                            i = j;
                            break;
                        }
                    }
                }
            }
        }
    }
    cout<<max_length<<" "<<word<<"\n";
    return 0;
}
