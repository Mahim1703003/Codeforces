#include<stdio.h>
int main()
{
    int a,b,i,k=0;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
    {
        if(i%b==0)
            a++;
        k++;
    }
    printf("%d\n",k);
    return 0;
}

