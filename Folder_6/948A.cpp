#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int r,c,i,j,b,d,k=0;
    cin>>r>>c;
    char a[r][c],ch;
    for(i=0;i<=r-1;i++)
    {
        for(j=0;j<=c-1;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='.')
                a[i][j]='D';
        }
    }
    for(i=0;i<=r-1;i++)
    {
        for(j=0;j<=c-1;j++)
        {
            if(a[i][j]=='W')
            {
                if(i+1<=r-1)
                {
                    if(a[i+1][j]=='S')
                    {
                        k++;
                        break;
                    }
                }

                if(i-1>=0)
                {
                    if(a[i-1][j]=='S')
                    {
                        k++;
                        break;
                    }
                }

                if(j+1<=c-1)
                {
                    if(a[i][j+1]=='S')
                    {
                        k++;
                        break;
                    }
                }

                if(j-1>=0)
                {
                    if(a[i][j-1]=='S')
                    {
                        k++;
                        break;
                    }
                }
            }
        }
        if(k!=0)
            break;
    }
    if(k!=0)
        cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        for(i=0;i<=r-1;i++)
        {
            for(j=0;j<=c-1;j++)
                cout<<a[i][j];
            cout<<"\n";
        }
    }
    return 0;
}
