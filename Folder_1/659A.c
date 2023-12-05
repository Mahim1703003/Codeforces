#include<stdio.h>
int main()
{
    int n,a,b,i;
    scanf("%d %d %d",&n,&a,&b);
    if(b>0)
    {
        if(a==n)
            a=0;
        for(i=1;i<=b;i++)
        {
            a++;
            if(i==b)
                break;
            if(a==n)
                a=0;
        }
        printf("%d\n",a);
    }
    else if(b<0)
    {
        b=-b;
        if(a==1)
            a=n+1;
        for(i=1;i<=b;i++)
        {
            a--;
            if(i==b)
                break;
            if(a==1)
                a=n+1;
        }
        printf("%d\n",a);
    }
    else
        printf("%d\n",a);
    return 0;
}
