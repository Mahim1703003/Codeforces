#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,a,b,c,x;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a<c)
            cout<<"1 ";
        else
            cout<<"-1 ";
        if(a<=c)
        {
            x = a * b;
            if(c<x)
                cout<<b<<"\n";
            else
                cout<<"-1\n";
        }
        else
            cout<<"1\n";
    }
    return 0;
}
