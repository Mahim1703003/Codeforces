#include<stdio.h>
#include<string.h>
int main()
{
    char a[5];
    int n,i,j,k=0;
    scanf("%d",&n);
    if(n>=1000&&n<=9000){
    for(i=n+1;i>=0;i++)
    {
        sprintf(a,"%d",i);//convertion of int to string.
        if(a[0]==a[1]||a[0]==a[2]||a[0]==a[3]||a[1]==a[2]||a[1]==a[3]||a[2]==a[3])
            k++;
        if(k==0)
            break;
        k=0;
    }
    }
    printf("%d\n",i);
    return 0;
}

