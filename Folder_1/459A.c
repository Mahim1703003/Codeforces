#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4,d,d1;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    if(x1==x2)
    {
        d=y2-y1;
        d1=abs(d);
        x3=d1;
        y3=y1;
        x4=d1;
        y4=y2;
        printf("%d %d %d %d\n",x3,y3,x4,y4);
    }
    else
    {
        x4=x2;
        y4=y1;
        x3=x1;
        y3=y2;
        d=abs(x4-x1);
        d1=abs(y2-y1);
        if(d==d1)
            printf("%d %d %d %d\n",x3,y3,x4,y4);
        else
            printf("-1\n");
    }
    return 0;
}
