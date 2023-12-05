#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,a,b,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
            swap(a,b);
        if(b<=a*2)
        {
            x = a % 3;
            y = b % 3;
            if((x+y)%3==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}
