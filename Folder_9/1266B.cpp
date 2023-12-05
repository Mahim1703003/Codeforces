#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(x%14>=1 && x%14<=6)
        {
            if(x>=1 && x<=6)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
    return 0;
}
