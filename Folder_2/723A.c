#include<stdio.h>
int main()
{
    int a,b,c,x,y,z,i,temp,k=0;
    int e,f,g;
    scanf("%d %d %d",&a,&b,&c);
    x=(a<b)?a:b;
    y=(x<c)?x:c;
    x=(a>b)?a:b;
    z=(x>c)?x:c;
    int d[z];
    for(i=y;i<=z;i++)
    {
        e=a-i;
        if(e<0)
            e=(-1)*e;
        f=b-i;
        if(f<0)
            f=(-1)*f;
        g=c-i;
        if(g<0)
            g=(-1)*g;
        d[k]=e+f+g;
        k++;
    }
    for(i=1;i<=k-1;i++)
    {
        if(d[i]<d[0])
        {
            temp=d[0];
            d[0]=d[i];
            d[i]=temp;
        }
    }
    printf("%d\n",d[0]);
    return 0;
}
