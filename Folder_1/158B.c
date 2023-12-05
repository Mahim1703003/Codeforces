#include<stdio.h>
int main()
{
    int a1=0,a2=0,a3=0,a4=0,sum=0,n,i,b2,b1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
            a1++;
        else if(a[i]==2)
            a2++;
        else if(a[i]==3)
            a3++;
        else if(a[i]==4)
            a4++;
    }
    sum=sum+a4;
    b2=(a2*2)/4;
    sum=sum+b2;
    a2=a2-b2*2;
    b1=a1/4;
    sum=sum+b1;
    a1=a1-b1*4;
    if(a2==1)
    {
        if(a1>=2)
        {
            sum++;
            a1=a1-2;
        }
        else if(a1>=1)
        {
            sum++;
            a1=a1-1;
        }
        else if(a1==0)
            sum++;
        if(a1>=a3)
        {
            sum=sum+a3;
            a1=a1-a3;
            if(a1<=4)
                sum++;
        }
        else
        {
            sum=sum+a1;
            a3=a3-a1;
            sum=sum+a3;
        }
    }
    else
    {
        if(a1>=a3)
        {
            sum=sum+a3;
            a1=a1-a3;
            if(a1<=4)
                sum++;
        }
        else
        {
            sum=sum+a1;
            a3=a3-a1;
            sum=sum+a3;
        }
    }
    printf("%d\n",sum);
    return 0;
}
