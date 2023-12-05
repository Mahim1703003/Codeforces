#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,a,b,c,d,k,pen,pencil;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>k;
        pen = ceil((a*1.0)/(c*1.0));
        pencil = ceil((b*1.0)/(d*1.0));
        if(pen+pencil<=k)
            cout<<pen<<" "<<pencil<<"\n";
        else
            cout<<"-1\n";
    }
    return 0;
}
