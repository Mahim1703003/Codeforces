#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,a,b,d,div;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        d = abs(a-b);
        div = d / 10;
        if(d%10!=0)
            cout<<div+1<<"\n";
        else
            cout<<div<<"\n";
    }
    return 0;
}
