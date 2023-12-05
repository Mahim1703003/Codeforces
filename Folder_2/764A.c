#include<stdio.h>
int main()
{
    int n,m,z,i,j,g,h,k=0,l=0,c=0;
    scanf("%d %d %d",&n,&m,&z);
    int a[z],b[z];
    for(i=1;i<=z;i++)
    {
        g=n*i;
        if(g<=z)
        {
            a[k]=g;
            k++;
        }
        h=m*i;
        if(h<=z)
        {
            b[l]=h;
            l++;
        }
        if(g>z&&h>z)
            break;
    }
    for(i=0;i<=k-1;i++)
    {
        for(j=0;j<=l-1;j++)
        {
            if(a[i]==b[j])
            {
                c++;
                break;
            }
        }
    }
    printf("%d\n",c);
    return 0;
}
