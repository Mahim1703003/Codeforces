#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,sx,sy,x,y,r=0,l=0,u=0,d=0;
    cin>>n>>sx>>sy;
    while(n--)
    {
        cin>>x>>y;
        if(x>sx)
            r++;
        if(x<sx)
            l++;
        if(y>sy)
            u++;
        if(y<sy)
            d++;
    }
    if(r>=l&&r>=u&&r>=d)
        cout<<r<<"\n"<<sx+1<<" "<<sy<<"\n";
    else if(l>=r&&l>=u&&l>=d)
        cout<<l<<"\n"<<sx-1<<" "<<sy<<"\n";
    else if(u>=r&&u>=l&&u>=d)
        cout<<u<<"\n"<<sx<<" "<<sy+1<<"\n";
    else if(d>=r&&d>=l&&d>=u)
        cout<<d<<"\n"<<sx<<" "<<sy-1<<"\n";
    return 0;
}
