#include<stdio.h>
int main()
{
    int n,m,a,b,rubles,rubles1,rubles2,rubles3,x,y;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    rubles=n/m;
    rubles1=rubles*b+(n%m)*a;
    rubles2=rubles*b+b;
    rubles3=n*a;
    x=(rubles1<rubles2)?rubles1:rubles2;
    y=(x<rubles3)?x:rubles3;
    printf("%d\n",y);
    return 0;
}
