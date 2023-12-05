#include<stdio.h>
int main()
{
    int i,k=0;
    char a[52];
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='1'||a[i]=='3'||a[i]=='5'||a[i]=='7'||a[i]=='9')
            k++;
    }
    printf("%d\n",k);
    return 0;
}
