#include<iostream>

char a[15][15];

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int r,c,i,j,k=0;
    cin>>r>>c;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
            cin>>a[i][j];
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(a[i][j]=='W')
            {
                if(a[i+1][j]=='P'||a[i-1][j]=='P'||a[i][j+1]=='P'||a[i][j-1]=='P')
                    k++;
            }
        }
    }
    cout<<k<<"\n";
    return 0;
}
