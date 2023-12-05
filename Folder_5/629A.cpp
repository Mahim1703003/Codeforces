#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k=0,sum=0;
    cin>>n;
    char a[n][n];
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='C')
                k++;
        }
        sum = sum + (k*(k-1))/2;
        k = 0;
    }
    for(j=0;j<=n-1;j++)
    {
        for(i=0;i<=n-1;i++)
        {
            if(a[i][j]=='C')
                k++;
        }
        sum = sum + (k*(k-1))/2;
        k = 0;
    }
    cout<<sum<<endl;
    return 0;
}
