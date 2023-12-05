#include<stdio.h>
int main()
{
    int n,m,i,k=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        if(i%m==0)
            n++;
        k++;
    }
    printf("%d\n",k);
    return 0;
}
