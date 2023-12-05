#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n,i,j,l,k=0;
    scanf("%d",&n);
    if(n%2==1)
        printf("NO\n");
    else if(n%8==0)
        printf("YES\n%d\n",n);
    else
    {
        int m,b,odd=0,p=0,q;
        char a[105];
        sprintf(a,"%d",n);
        m=strlen(a);
        for(i=0;i<=m-1;i++)
        {
            b=a[i]-'\0';
            if(b%2==1)
                odd++;
        }
        for(l=0;l>=0;l++)
        {
            for(i=m-1;i>=0;i--)
            {
                if(p==odd)
                {
                    n=atoi(a);
                    for(q=0;q>=0;q++)
                    {
                        if(n%8==0)
                        {
                            k++;
                            printf("YES\n%d\n",n);
                            break;
                        }
                        n=n/10;
                    }
                }
                if(k!=0)
                    break;
                b=a[i]-'0';
                if(b%2==1)
                {
                    p++;
                    for(j=i;j<=m-1;j++)
                        a[j]=a[j+1];
                    n=atoi(a);
                    if(n%8==0)
                    {
                        k++;
                        printf("YES\n%d\n",n);
                        break;
                    }
                    else
                        sprintf(a,"%d",n);
                }
            }
            if(k!=0)
                break;
        }
    }
    return 0;
}
