#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int a,b,d,div,rem;
    cin>>a>>b>>d;
    if(d==0)
    {
        if(a==b)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else
    {
        div = (b-a+d)/d;
        if(div>0)
        {
            rem = (b-a+d)%d;
            if(rem==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}
