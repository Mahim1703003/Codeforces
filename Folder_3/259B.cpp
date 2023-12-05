#include<iostream>
using namespace std;
int main()
{
    int x,y,z,a[4][4],i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
            cin>>a[i][j];
    }
    z = (2*a[1][3]+a[1][2]-a[3][2]) / 2;
    x = a[1][3]+a[3][1]-z;
    y = x+a[1][2]+a[1][3]-a[2][1]-a[2][3];
    a[1][1] = x;
    a[2][2] = y;
    a[3][3] = z;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
