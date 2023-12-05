#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int ct = 0;
    long double R,d,r,n,x,y,dis1,dis2;
    cin>>R>>d>>n;
    while(n--)
    {
        cin>>x>>y>>r;
        dis1 = sqrt(x*x + y*y) - r;
        dis2 = sqrt(x*x + y*y) + r;
        if(dis1>=R-d && dis2<=R)
            ct++;
    }
    cout<<ct<<"\n";
    return 0;
}
