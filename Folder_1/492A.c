#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    for(i=1;i>=0;i++)
    {
        for(j=1;j<=i;j++)
            sum=sum+j;
        if(sum>n)
        {
            i--;
            break;
        }
    }
    printf("%d\n",i);
    return 0;
}
