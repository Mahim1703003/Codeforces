#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,v,c,first,second;
    cin>>t;
    while(t--)
    {
        cin>>v>>c>>first>>second;
        if(first+second>v+c)
        {
            cout<<"No\n";
            continue;
        }
        if(v>c)
        {
            if(second<=c)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
        else if(c>v)
        {
            if(second<=v)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
        else
        {
            if(second<=v)
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }
    return 0;
}
