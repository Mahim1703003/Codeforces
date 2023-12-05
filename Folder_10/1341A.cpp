#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,a,b,c,d,i,k=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c>>d;
        if(n*(a-b)>c+d || n*(a+b)<c-d)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
