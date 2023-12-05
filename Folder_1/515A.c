#include<stdio.h>
int main()
{
    int a,b,s,n;
    scanf("%d %d %d",&a,&b,&s);
    if(a==0&&b==0)
    {
        if(s%2==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    else
    {
        if(a<0)
            a=-a;
        if(b<0)
            b=-b;
        if((s-a-b)<0)
            printf("NO\n");
        else
        {
            n=s-a-b;
            if(n%2==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
