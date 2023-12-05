#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int x,y,d;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        d = x - y;
        if(d%2==0)
            cout<<"YES\n";
        else
        {
            if(d==1)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
    }
    return 0;
}
