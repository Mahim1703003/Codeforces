#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,x,p1=1,p2=2,spectator=3,k=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x==p1||x==p2)
            k++;
        if(x==p1)
            swap(p2,spectator);
        else if(x==p2)
            swap(p1,spectator);
    }
    if(k==n)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
