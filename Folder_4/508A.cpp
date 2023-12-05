#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,k,l,i,j,f=0,p=0;
    cin>>n>>m>>k;
    int a[n+2][m+2] = {0};
    for(l=1;l<=k;l++)
    {
        cin>>i>>j;
        a[i][j] = 1;
        if(a[i][j]==1&&a[i-1][j]==1&&a[i-1][j-1]==1&&a[i][j-1]==1)
            f++;
        else if(a[i][j]==1&&a[i-1][j]==1&&a[i-1][j+1]==1&&a[i][j+1]==1)
            f++;
        else if(a[i][j]==1&&a[i][j+1]==1&&a[i+1][j+1]==1&&a[i+1][j]==1)
            f++;
        else if(a[i][j]==1&&a[i][j-1]==1&&a[i+1][j-1]==1&&a[i+1][j]==1)
            f++;
        if(p==0&&f==1)
            p = l;
    }
    cout<<p<<"\n";
    return 0;
}
