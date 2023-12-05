#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,x,max_A=0,max_B=0;
    cin>>n;
    while(n--)
    {
        cin>>x;
        max_A = max(max_A,x);
    }
    cin>>m;
    while(m--)
    {
        cin>>x;
        max_B = max(max_B,x);
    }
    cout<<max_A<<" "<<max_B<<"\n";
    return 0;
}
