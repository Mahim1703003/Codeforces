#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    char s[50000];
    int i,j,n,q=0,l;
    char ch;
    bool check = false;
    scanf("%s",s);
    n = strlen(s);
    if(n<26)
        printf("-1\n");
    else
    {
        for(i=0;i<=n-26;i++)
        {
            for(j=i;j<=i+25;j++)
            {
                if(s[j]=='?')
                    q++;
                else
                    m[s[j]]++;
            }
            l = m.size();
            if(q+l==26)
            {
                for(j=i;j<=i+25;j++)
                {
                    if(s[j]=='?')
                    {
                        for(ch='A';ch<='Z';ch++)
                        {
                            if(m[ch]==0)
                            {
                                s[j] = ch;
                                m[ch]++;
                                break;
                            }
                        }
                    }
                }
                for(j=0;j<=n-1;j++)
                {
                    if(s[j]=='?')
                        s[j] = 'A';
                }
                check = true;
                break;
            }
            q = 0;
            m.clear();
        }
        if(check)
        {
            for(i=0;i<=n-1;i++)
                printf("%c",s[i]);
            printf("\n");
        }
        else
            printf("-1\n");
    }
    return 0;
}
