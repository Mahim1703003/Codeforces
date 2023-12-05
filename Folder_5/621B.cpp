#include<iostream>
using namespace std;

long long int a[1001][1001];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,x,y,i,k=0,sum=0;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        a[x][y]++;
    }
    x = 1;
    for(i=1;i<=1000;i++)
    {
        y = i;
        while(x<=1000&&y<=1000)
        {
            k = k + a[x][y];
            x++;
            y++;
        }
        sum = sum + (k*(k-1))/2;
        k = 0;
        x = 1;
    }
    y = 1;
    for(i=2;i<=1000;i++)
    {
        x = i;
        while(x<=1000&&y<=1000)
        {
            k = k + a[x][y];
            x++;
            y++;
        }
        sum = sum + (k*(k-1))/2;
        k = 0;
        y = 1;
    }
    x = 1;
    for(i=1000;i>=1;i--)
    {
        y = i;
        while(x<=1000&&y>=1)
        {
            k = k + a[x][y];
            x++;
            y--;
        }
        sum = sum + (k*(k-1))/2;
        k = 0;
        x = 1;
    }
    y = 1000;
    for(i=2;i<=1000;i++)
    {
        x = i;
        while(x<=1000&&y>=1)
        {
            k = k + a[x][y];
            x++;
            y--;
        }
        sum = sum + (k*(k-1))/2;
        k = 0;
        y = 1000;
    }
    cout<<sum<<"\n";
    return 0;
}

