#include<stdio.h>
int main()
{
    int n,i,k=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]==01&&a[i+1]==10)
            k++;
        else if(a[i]==10&&a[i+1]==01)
            k++;
    }
    printf("%d\n",k+1);
    return 0;
}
