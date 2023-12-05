#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int r,c,i,j,k,f=0;
    cin>>r>>c;
    char a[r][c];
    for(i=0;i<=r-1;i++)
    {
        for(j=0;j<=c-1;j++)
            cin>>a[i][j];
    }
    for(i=0;i<=r-1;i++)
    {
        for(j=0;j<=c-1;j++)
        {
            for(k=0;k<=c-1;k++)
            {
                if(j==k)
                    continue;
                if(a[i][j]==a[i][k])
                    f++;
            }
            for(k=0;k<=r-1;k++)
            {
                if(i==k)
                    continue;
                if(a[i][j]==a[k][j])
                    f++;
            }
            if(f==0)
                s = s + a[i][j];
            f = 0;
        }
    }
    cout<<s<<"\n";
    return 0;
}
