#include<stdio.h>
int main()
{
    int n,i,c,d,x,y,z,sum=0;
    scanf("%d",&n);
    char a[n+1],b[n+1];
    scanf(" %[^\n]s",a);
    scanf(" %[^\n]s",b);
    for(i=0;i<=n-1;i++)
    {
        c=a[i]-'0';
        d=b[i]-'0';
        if(c>d)
        {
            x=c-d;
            y=(d+10)-c;
            z=(x<y)?x:y;
        }
        else if(c<d)
        {
            x=d-c;
            y=(c+10)-d;
            z=(x<y)?x:y;
        }
        else if(c==d)
            continue;
        sum=sum+z;
    }
    printf("%d\n",sum);
    return 0;
}
