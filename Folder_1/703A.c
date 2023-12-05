#include<stdio.h>
int main()
{
    int n,i,k=0,l=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
        scanf("%d %d",&a[i],&b[i]);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]>b[i])
            k++;
        else if(a[i]<b[i])
            l++;
    }
    if(k>l)
        printf("Mishka\n");
    else if(k<l)
        printf("Chris\n");
    else
        printf("Friendship is magic!^^\n");
    return 0;
}
