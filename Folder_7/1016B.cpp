#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    string t,s2;
    int n,m,q,l,r,d,i,j,k=0,ct=0,in;
    scanf("%d%d%d",&n,&m,&q);//cin>>n>>m>>q;
    char s[n],t2[m];
    scanf("%s%s",s,t2);
    t = t2;//cin>>s>>t;
    while(q--)
    {
        scanf("%d%d",&l,&r);//cin>>l>>r;
        d = r - l + 1;
        if(m<=d)
        {
            char s1[d];
            for(i=l-1,in=0;i<=r-1;i++,in++)
                s1[in] = s[i];
            for(i=0;i<=m-1;i++)
                s2 = s2 + s1[i];
            if(s2==t)
                ct++;
            for(i=m,k=0;i<=d-1;i++,k++)
            {
                s2[k] = '0';
                s2 = s2 + s1[i];
                t = '0' + t;
                if(s2==t)
                    ct++;
            }
            printf("%d\n",ct);//cout<<ct<<"\n";
            ct = 0;
            s2.clear();
            t = t2;
        }
        else
            printf("0\n");//cout<<"0\n";
    }
    return 0;
}
