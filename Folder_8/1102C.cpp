#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,x,y,i,e,ct=0;
    cin>>n>>x>>y;
    for(i=1;i<=n;i++)
    {
        cin>>e;
        if(e<=x)
            ct++;
    }
    if(x>y)
        cout<<n<<"\n";
    else
    {
        e = ceil((ct*1.0)/2.0);
        cout<<e<<"\n";
    }
    return 0;
}
