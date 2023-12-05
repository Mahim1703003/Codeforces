#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d,i,k=0,l=0,s=0;
    scanf("%d %d",&a,&b);
    for(i=1;i<=6;i++)
    {
        c=abs(a-i);
        d=abs(b-i);
        if(c<d)
            k++;
        else if(d<c)
            l++;
        else
            s++;
    }
    printf("%d %d %d\n",k,s,l);
    return 0;
}
