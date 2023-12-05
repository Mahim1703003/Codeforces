#include<stdio.h>
int main()
{
    int n,a,b,i,r,c=0;
    long long int mult1=1,mult2=0;
    scanf("%d %d",&n,&a);
    b=a;
    for(;;)
    {
        r=a%10;
        if(r==1||r==0)
            c++;
        for(i=1;i<=r;i++)
            mult1=mult1*i;
        a=a/10;
        if(a==0)
            break;
    }
        char str[2],temp;
        int k,l;
        for(;;)
        {
            r=b%10;
            if(r==2)
                mult2=mult2*10+2;
            else if(r==3)
                mult2=mult2*10+3;
            else if(r==4)
                mult2=mult2*1000+322;
            else if(r==5)
                mult2=mult2*10+5;
            else if(r==6)
                mult2=mult2*100+53;
            else if(r==7)
                mult2=mult2*10+7;
            else if(r==8)
                mult2=mult2*10000+7222;
            else if(r==9)
                mult2=mult2*10000+7332;
            b=b/10;
            if(b==0)
                break;
        }
        sprintf(str," %d",mult2);
        for(k=0;str[k]!='\0';k++)
        {
            for(l=k+1;str[l]!='\0';l++)
            {
                if(str[l]>str[k])
                {
                    temp=str[k];
                    str[k]=str[l];
                    str[l]=temp;
                }
            }
        }
        printf("%s\n",str);

    return 0;
}
