#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k,d,i;
    cin>>k>>d;
    if(d==0&&k>1)
        cout<<"No solution\n";
    else
    {
        cout<<d;
        for(i=1;i<=k-1;i++)
            cout<<"0";
        cout<<"\n";
    }
    return 0;
}
