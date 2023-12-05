#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,a,b,rem;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        rem = a % b;
        if(rem==0)
            cout<<"0\n";
        else
            cout<<b-rem<<"\n";
    }
    return 0;
}
