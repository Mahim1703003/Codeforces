#include<stdio.h>
int main()
{
    int a[6],b[6],i,j,k=1,m=0,l=0;
    for(i=0;i<=5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=5;i++)
    {
        if(a[i]==-2)
            continue;
        for(j=i+1;j<=5;j++)
        {
            if(a[i]==a[j])
            {
                k++;
                a[j]=-2;
            }
        }
        b[m]=k;
        m++;
        k=1;
    }
    if(m==3)
    {
        if((b[0]==4&&b[1]==1&&b[2]==1)||(b[0]==1&&b[1]==4&&b[2]==1)||(b[0]==1&&b[1]==1&&b[2]==4))
            printf("Bear\n");
        else
            printf("Alien\n");
    }
    else if(m==2)
    {
        if((b[0]==4&&b[1]==2)||(b[0]==2&&b[1]==4))
            printf("Elephant\n");
        else if((b[0]==5&&b[1]==1)||(b[0]==1&&b[1]==5))
            printf("Bear\n");
        else
            printf("Alien\n");
    }
    else if(m==1)
        printf("Elephant\n");
    else
        printf("Alien\n");
    return 0;
}
