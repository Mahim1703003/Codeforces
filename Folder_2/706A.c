#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,n;
    scanf("%d %d %d",&a,&b,&n);
    int x[n],y[n],v[n];
    double d,h,t[n],temp;
    for(i=0;i<=n-1;i++)
    {
        scanf("%d %d %d",&x[i],&y[i],&v[i]);
        h=pow((a-x[i])*1.0,2.0)+pow((b-y[i])*1.0,2.0);
        d=sqrt(h);
        t[i]=d/(v[i]*1.0);
    }
    for(i=1;i<=n-1;i++)
    {
        if(t[i]<t[0])
        {
            temp=t[0];
            t[0]=t[i];
            t[i]=temp;
        }
    }
    printf("%lf\n",t[0]);
    return 0;
}
