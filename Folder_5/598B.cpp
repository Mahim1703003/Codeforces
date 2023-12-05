#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    char s[10001];
    ///string s,s1;
    int q,l,r,k,m,i,j,p;
    scanf("%s%d",s,&q);
    while(q--)
    {
        scanf("%d%d%d",&l,&r,&k);
        m = r - l + 1;
        char s1[m];
        for(i=l-1,j=0;i<=r-1;i++,j++)
            s1[j] = s[i];
        char ch[m];
        k = k % m;
        for(j=0;j<=m-1;j++)
        {
            p = (j + k) % m;
            ch[p] = s1[j];
        }
        for(i=l-1,j=0;i<=r-1;i++,j++)
            s[i] = ch[j];
    }
    printf("%s\n",s);
    return 0;
}
