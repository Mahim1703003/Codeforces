#include<stdio.h>
int main()
{
    int n,k,l,c,d,p,nl,np,drink_toast,slice_toast,salt_toast,x,y,answer;
    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    drink_toast=(k*l)/nl;
    slice_toast=c*d;
    salt_toast=p/np;
    x=(drink_toast<slice_toast)?drink_toast:slice_toast;
    y=(x<salt_toast)?x:salt_toast;
    answer=y/n;
    printf("%d\n",answer);
    return 0;
}
