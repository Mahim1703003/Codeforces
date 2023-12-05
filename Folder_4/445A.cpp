#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    char a[n][m];
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=m-1;j++)
        {
            cin>>a[i][j];
            if((i+1)%2==1)
            {
                if(a[i][j]=='.')
                {
                    if((j+1)%2==1)
                        a[i][j]='B';
                    else
                        a[i][j]='W';
                }
            }
            else
            {
                if(a[i][j]=='.')
                {
                    if((j+1)%2==1)
                        a[i][j]='W';
                    else
                        a[i][j]='B';
                }
            }
        }
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=m-1;j++)
            cout<<a[i][j];
        cout<<endl;
    }
    return 0;
}
