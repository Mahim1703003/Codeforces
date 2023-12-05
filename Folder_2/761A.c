#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a==0&&b==0)
        printf("NO\n");
    else
    {
        c=abs(a-b);
        if(c==0||c==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
