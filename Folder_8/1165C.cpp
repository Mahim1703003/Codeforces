#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    /*ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);*/
    char s[200001],s2[200001];//string s,s2;
    int n,i,k=0,m=0;
    scanf("%d",&n);
    scanf("%s",s);
    s2[m] = s[0];
    m++;
    for(i=1;i<=n-1;i++)
    {
        if(s2[m-1]!=s[i])
        {
            s2[m] =s[i];
            m++;
            if(i+1<=n-1)
            {
                s2[m] = s[i+1];
                m++;
                i++;
            }
        }
        else
            k++;
    }
    if(m%2==0)
    {
        s2[m] = '\n';
        printf("%d\n",k);
        for(i=0;i<=m-1;i++)
            printf("%c",s2[i]);
        printf("\n");
    }
    else
    {
        k++;
        m--;
        s2[m] = '\n';
        printf("%d\n",k);
        for(i=0;i<=m-1;i++)
            printf("%c",s2[i]);
        printf("\n");
    }
    return 0;
}
