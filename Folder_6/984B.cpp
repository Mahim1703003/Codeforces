#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,i,j,k=0,valid=0,x;
    cin>>n>>m;
    char ch[n+2][m+2],c;
    for(i=0;i<=n+1;i++)
    {
        for(j=0;j<=m+1;j++)
            ch[i][j] = 'a';
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>c;
            ch[i][j] = c;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(ch[i][j]>='1'&&ch[i][j]<='8')
            {
                x = ch[i][j] - '0';
                if(ch[i+1][j]=='*')
                    k++;
                if(ch[i-1][j]=='*')
                    k++;
                if(ch[i][j+1]=='*')
                    k++;
                if(ch[i][j-1]=='*')
                    k++;
                if(ch[i+1][j+1]=='*')
                    k++;
                if(ch[i-1][j-1]=='*')
                    k++;
                if(ch[i+1][j-1]=='*')
                    k++;
                if(ch[i-1][j+1]=='*')
                    k++;
                if(k==x)
                    valid++;
                k = 0;
            }
            else if(ch[i][j]=='.')
            {
                if(ch[i+1][j]=='*')
                    k++;
                if(ch[i-1][j]=='*')
                    k++;
                if(ch[i][j+1]=='*')
                    k++;
                if(ch[i][j-1]=='*')
                    k++;
                if(ch[i+1][j+1]=='*')
                    k++;
                if(ch[i-1][j-1]=='*')
                    k++;
                if(ch[i+1][j-1]=='*')
                    k++;
                if(ch[i-1][j+1]=='*')
                    k++;
                if(k==0)
                    valid++;
                k = 0;
            }
            else
                valid++;
        }
    }
    if(valid==n*m)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
