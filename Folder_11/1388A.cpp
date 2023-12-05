#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<=30)
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            if(n==36)
                cout<<"5 6 10 15\n";
            else if(n==40)
                cout<<"5 6 14 15\n";
            else if(n==44)
                cout<<"6 7 10 21\n";
            else
            {
                d = n - 30;
                cout<<"6 10 14 "<<d<<"\n";
            }
        }
    }
    return 0;
}
