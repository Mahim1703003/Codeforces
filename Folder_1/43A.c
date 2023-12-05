#include<stdio.h>
#include<string.h>

struct football
{
    char str[103];
};

int main()
{
    int n,i,j,team1=0,team2=0,k=1;
    char team_name1[103],team_name2[103];
    scanf("%d",&n);
    struct football a[n];
    for(i=0;i<=n-1;i++)
        scanf(" %s",a[i].str);
    for(i=0;i<=n-1;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(strcmp(a[i].str,a[j].str)==0)
                k++;
        }
        team1=k;
        strcpy(team_name1,a[i].str);
        k=1;
        break;
    }
    for(i=0;i<=n-1;i++)
    {
        if(strcmp(team_name1,a[i].str)==0)
            continue;
        else
        {
            for(j=i+1;j<=n-1;j++)
            {
                if(strcmp(a[i].str,a[j].str)==0)
                    k++;
            }
            team2=k;
            strcpy(team_name2,a[i].str);
            break;
        }
    }
    if(team1>team2)
        printf("%s\n",team_name1);
    else
        printf("%s\n",team_name2);
    return 0;
}
