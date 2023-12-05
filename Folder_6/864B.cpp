#include<iostream>
#include<map>
using namespace std;
int main()
{
    map <char,int> m;
    int n,i,j,k=0,maximum=0;
    char ch;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<=n-1;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            m[s[i]] = 1;
            k++;
            for(j=i+1;j<=n-1;j++)
            {
                if(s[j]>='a'&&s[j]<='z')
                {
                    if(m[s[j]]==0)
                    {
                        k++;
                        m[s[j]] = 1;
                    }
                }
                if((s[j]>='A'&&s[j]<='Z')||j==n-1)
                {
                    if(k>maximum)
                        maximum = k;
                    k = 0;
                    i = j;
                    m.clear();
                    break;
                }
            }
        }
    }
    if(k>maximum)
        maximum = k;
    cout<<maximum<<endl;
    return 0;
}
