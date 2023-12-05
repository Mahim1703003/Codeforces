#include<iostream>
#include<map>
#include<cstdio>
using namespace std;
int main()
{
    /*ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);*/
    map <int,int> m1,m2;
    int n,m,i,x,k;
    scanf("%d%d",&n,&m);
    char s[m+1];
    for(i=0;i<=m-1;i++)
    {
        cin>>x;
        m1[x]++;
        k = m1[x];
        m2[k]++;
        if(m2[k]==n)
            s[i] = '1';
        else
            s[i] = '0';
    }
    s[i] = '\0';
    printf("%s",s);
    return 0;
}
