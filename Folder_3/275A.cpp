#include<iostream>
using namespace std;
int main()
{
    int a[5][5],b[4][4];
    int i,j,x,y;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
            a[i][j] = 1;
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
            cin>>b[i][j];
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            if(b[i][j]%2==1)
            {
                if(a[i][j]==0)
                    a[i][j] = 1;
                else
                    a[i][j] = 0;
                if(a[i+1][j]==0)
                    a[i+1][j] = 1;
                else
                    a[i+1][j] = 0;
                if(a[i-1][j]==0)
                    a[i-1][j] = 1;
                else
                    a[i-1][j] = 0;
                if(a[i][j+1]==0)
                    a[i][j+1] = 1;
                else
                    a[i][j+1] = 0;
                if(a[i][j-1]==0)
                    a[i][j-1] = 1;
                else
                    a[i][j-1] = 0;
            }
         }
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
            cout<<a[i][j];
        cout<<endl;
    }
}
