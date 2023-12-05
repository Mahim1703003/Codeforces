#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,r,c,k=0;
    cin>>n>>m;
    char a[n][m];
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=m-1;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='*')
                k++;
        }
        if(k==1)
            r = i;
        k = 0;
    }
    for(j=0;j<=m-1;j++)
    {
        for(i=0;i<=n-1;i++)
        {
            if(a[i][j]=='*')
                k++;
        }
        if(k==1)
            c = j;
        k = 0;
    }
    cout<<r+1<<" "<<c+1<<endl;
    return 0;
}
