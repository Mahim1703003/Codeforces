#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int n,m,xi,yi,xf,yf,x,y,u,r,l,d,i,j,in,k=0,ct=0;
    cin>>n>>m;
    char a[n+1][m+1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='S')
            {
                xi = i;
                yi = j;
            }
            else if(a[i][j]=='E')
            {
                xf = i;
                yf = j;
            }
        }
    }
    cin>>s;
    for(u=0;u<=3;u++)
    {
        for(r=0;r<=3;r++)
        {
            if(r!=u)
            {
                for(l=0;l<=3;l++)
                {
                    if(l!=u&&l!=r)
                    {
                        for(d=0;d<=3;d++)
                        {
                            if(d!=u&&d!=r&&d!=l)
                            {
                                x = xi;
                                y = yi;
                                for(i=0;i<=s.size()-1;i++)
                                {
                                    in = s[i] - '0';
                                    if(in==u)
                                        x--;
                                    else if(in==r)
                                        y++;
                                    else if(in==l)
                                        y--;
                                    else if(in==d)
                                        x++;
                                    if((x>=1&&x<=n)&&(y>=1&&y<=m))
                                    {
                                        if(a[x][y]=='#')
                                            break;
                                        else if(a[x][y]=='E')
                                        {
                                            k++;
                                            break;
                                        }
                                    }
                                    else
                                        break;
                                }
                                if(k==1)
                                    ct++;
                                k = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<ct<<"\n";
    return 0;
}
