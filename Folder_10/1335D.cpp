#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,i,j,k=0;
    char a[10][10];
    cin>>t;
    while(t--)
    {
        for(i=1;i<=9;i++)
        {
            for(j=1;j<=9;j++)
                cin>>a[i][j];
        }
        for(i=1;i<=3;i++)
        {
            for(j=i;j<=9;j=j+3)
            {
                k++;
                if(a[j][k]=='9')
                    a[j][k] = '8';
                else
                    a[j][k]++;
            }
        }
        for(i=1;i<=9;i++)
        {
            for(j=1;j<=9;j++)
                cout<<a[i][j];
            cout<<"\n";
        }
        k = 0;
    }
    return 0;
}
