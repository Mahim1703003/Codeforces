#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,l,r,i;
    cin>>n>>m;
    for(i=1;i<=m;i++)
        cin>>l>>r;
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
            cout<<"0";
        else
            cout<<"1";
    }
    cout<<"\n";
    return 0;
}
