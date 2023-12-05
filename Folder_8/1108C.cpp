#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ///string s[6],t,mins;
    int n,i,j,diff=0,min_color,k;
    scanf("%d",&n);
    char t[n],mins[n];
    scanf("%s",t);
    if(n==1)
        printf("0\n%s\n",t);///cout<<"0\n"<<t<<"\n";
    else if(n==2)
    {
        if(t[0]==t[1])
        {
            if(t[0]=='B')
                t[0] = 'R';
            else if(t[0]=='R')
                t[0] = 'G';
            else if(t[0]=='G')
                t[0] = 'B';
            printf("1\n%s\n",t);///cout<<"1\n"<<t<<"\n";
        }
        else
            printf("0\n%s\n",t);//cout<<"0\n"<<t<<"\n";
    }
    else
    {
        char s[6][n];
        s[0][0] = 'R';s[0][1]='G';s[0][2]='B';
        s[1][0] = 'R';s[1][1]='B';s[1][2]='G';
        s[2][0] = 'B';s[2][1]='R';s[2][2]='G';
        s[3][0] = 'B';s[3][1]='G';s[3][2]='R';
        s[4][0] = 'G';s[4][1]='R';s[4][2]='B';
        s[5][0] = 'G';s[5][1]='B';s[5][2]='R';
        for(i=0;i<=5;i++)
        {
            for(j=3,k=0;j<=n-1;j++,k++)
            {
                if(k==3)
                    k = 0;
                s[i][j] = s[i][k];
            }
        }
        for(i=0;i<=5;i++)
        {
            for(j=0;j<=n-1;j++)
            {
                if(s[i][j]!=t[j])
                    diff++;
            }
            if(i==0)
            {
                min_color = diff;
                for(j=0;j<=n-1;j++)
                    mins[j] = s[i][j];
                //strcpy(mins,s[i]);//mins = s[i];
            }
            else
            {
                if(diff<min_color)
                {
                    min_color = diff;
                    for(j=0;j<=n-1;j++)
                        mins[j] = s[i][j];
                    //strcpy(mins,s[i]);//mins = s[i];
                }
            }
            diff = 0;
        }
        printf("%d\n",min_color);//cout<<min_color<<"\n"<<mins<<"\n";
        for(j=0;j<=n-1;j++)
            printf("%c",mins[j]);
        printf("\n");
    }
    return 0;
}
