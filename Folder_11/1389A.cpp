#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        if(l+l<=r)
            cout<<l<<" "<<l+l<<"\n";
        else
            cout<<"-1 -1\n";
    }
    return 0;
}
