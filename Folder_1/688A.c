#include<stdio.h>
int main()
{
    int n,d,i,j,k=0,l=0,m=0;
    scanf("%d %d",&n,&d);
    char a[n+3];
    for(i=1;i<=d;i++)
    {
        scanf(" %s",a);
        for(j=0;a[j]!='\0';j++)
        {
            if(a[j]=='0')
            {
                k++;
                break;
            }
        }
        if(k!=0)
        {
            l++;
            k=0;
        }
        else
        {
            if(l>m)
                m=l;
            l=0;
        }
        if(i==d)
        {
            if(l>m)
                m=l;
            l=0;
        }
    }
    printf("%d\n",m);
    return 0;
}
