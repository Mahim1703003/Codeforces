#include<iostream>
using namespace std;

int main()
{
    int n,d,m,i,x,y;
    cin>>n>>d;
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>x>>y;
        if((x-y-d==0)||(x-y+d==0)||(x+y-d==0)||(x+y-2*n+d==0))
            cout<<"YES\n";
        else if(((x-y-d>0&&x-y+d<0)||(x-y-d<0&&x-y+d>0))&&((x+y-d>0&&x+y-2*n+d<0)||(x+y-d<0&&x+y-2*n+d>0)))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
