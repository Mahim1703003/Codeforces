#include<stdio.h>
int main()
{
    int a[5][5],i,j,m,n,temp,k=0;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                m=i;
                n=j;
            }
        }
    }
    if(n>2)
    {
        for(i=n;i>=3;i--)
        {
            for(j=0;j<=4;j++)
            {
                temp = a[j][i];
                a[j][i] = a[j][i-1];
                a[j][i-1] = temp;
            }
            k++;
        }
        if(m<2)
        {
            for(i=m;i<=1;i++)
            {
                for(j=0;j<=4;j++)
                {
                    temp = a[i][j];
                    a[i][j] = a[i+1][j];
                    a[i+1][j] = temp;
                }
                k++;
            }
        }
        else if(m>2)
        {
            for(i=m;i>=3;i--)
            {
                for(j=0;j<=4;j++)
                {
                    temp = a[i][j];
                    a[i][j] = a[i-1][j];
                    a[i-1][j] = temp;
                }
                k++;
            }
        }
    }
    else if(n<2)
    {
        for(i=n;i<=1;i++)
        {
            for(j=0;j<=4;j++)
            {
                temp = a[j][i];
                a[j][i] = a[j][i+1];
                a[j][i+1] = temp;
            }
            k++;
        }
        if(m<2)
        {
            for(i=m;i<=1;i++)
            {
                for(j=0;j<=4;j++)
                {
                    temp = a[i][j];
                    a[i][j] = a[i+1][j];
                    a[i+1][j] = temp;
                }
                k++;
            }
        }
        else if(m>2)
        {
            for(i=m;i>=3;i--)
            {
                for(j=0;j<=4;j++)
                {
                    temp = a[i][j];
                    a[i][j] = a[i-1][j];
                    a[i-1][j] = temp;
                }
                k++;
            }
        }
    }
    else if(n==2)
    {
        if(m<2)
        {
            for(i=m;i<=1;i++)
            {
                for(j=0;j<=4;j++)
                {
                    temp = a[i][j];
                    a[i][j] = a[i+1][j];
                    a[i+1][j] = temp;
                }
                k++;
            }
        }
        else if(m>2)
        {
            for(i=m;i>=3;i--)
            {
                for(j=0;j<=4;j++)
                {
                    temp = a[i][j];
                    a[i][j] = a[i-1][j];
                    a[i-1][j] = temp;
                }
                k++;
            }
        }
    }
    printf("%d\n",k);
    return 0;
}
