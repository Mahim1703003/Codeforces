#include<iostream>
#include<cstring>
using namespace std;

struct game
{
    char name[50];
    int score;
};

int main()
{
    int n,i,j,s,m=0,k=0,l;
    char ch[50],ch2[50];
    cin>>n;
    struct game a[n],temp;
    for(i=1;i<=n;i++)
    {
        if(m==0)
        {
            cin>>a[m].name;
            cin>>a[m].score;
            m++;
        }
        else
        {
            cin>>ch;
            cin>>s;
            for(j=0;j<=m-1;j++)
            {
                if(strcmp(ch,a[j].name)==0)
                {
                    k++;
                    a[j].score=a[j].score+s;
                }
            }
            if(k==0)
            {
                strcpy(a[m].name,ch);
                a[m].score=s;
                m++;
            }
            k=0;
            for(j=1;j<=m-1;j++)
            {
                if(a[j].score>a[0].score)
                {
                    temp=a[0];
                    a[0]=a[j];
                    a[j]=temp;
                }
            }
            if(i==1)
            {
                strcpy(ch2,a[0].name);
                l=a[0].score;
            }
            else
            {
                if(a[0].score>l)
                {
                    l=a[0].score;
                    strcpy(ch2,a[0].name);
                }
            }
        }
    }
    cout<<ch2<<endl;
    return 0;
}
