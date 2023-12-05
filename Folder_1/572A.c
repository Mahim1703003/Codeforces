#include<stdio.h>
int main()
{
    int na,nb,c,d,i;
    scanf("%d %d",&na,&nb);
    scanf("%d %d",&c,&d);
    int a[na],b[nb];
    for(i=0;i<=na-1;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=nb-1;i++)
        scanf("%d",&b[i]);
    if(a[c-1]<b[0])
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
