#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,half;
    cin>>n>>m;
    if(n%2==0)
    {
        half = n / 2;
        if(m<=half)
        {
            if(m==0)
                cout<<"1\n";
            else
                cout<<m<<"\n";
        }
        else
            cout<<half-(m-half)<<"\n";
    }
    else
    {
        half = n / 2;
        if(m<=half)
        {
            if(m==0)
                cout<<"1\n";
            else
                cout<<m<<"\n";
        }
        else
        {
            if(m==half+1)
                cout<<half<<"\n";
            else
                cout<<half-(m-(half+1))<<"\n";
        }
    }
    return 0;
}
