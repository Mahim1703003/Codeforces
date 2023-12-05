#include<stdio.h>
int main()
{
    int n,i,j,k=1,m=0;
    char ch1,ch2;
    scanf("%d",&n);
    char a[n+3];
    scanf(" %s",a);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j]&&a[i+1]==a[j+1])
                k++;
        }
        if(k>m)
        {
            m=k;
            ch1=a[i];
            ch2=a[i+1];
        }
        k=1;
    }
    printf("%c%c\n",ch1,ch2);
    return 0;
}
