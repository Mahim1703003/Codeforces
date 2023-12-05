#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,x,y,i,odd1=0,odd2=0,onlyodd1=0,onlyodd2=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        if(x%2==1)
            odd1++;
        if(y%2==1)
            odd2++;
        if(x%2==1&&y%2==0)
            onlyodd1++;
        if(y%2==1&&x%2==0)
            onlyodd2++;
    }
    if(odd1%2==1&&odd2%2==1)
    {
        if(onlyodd1>=1||onlyodd2>=1)
            cout<<"1\n";
        else
            cout<<"-1\n";
    }
    else if((odd1%2==0&&odd2%2==1)||(odd1%2==1&&odd2%2==0))
        cout<<"-1\n";
    else
        cout<<"0\n";
    return 0;
}
