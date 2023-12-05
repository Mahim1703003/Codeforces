#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
        {
            if(n==2)
                cout<<"2\n";
            else
                cout<<"0\n";
        }
        else
            cout<<"1\n";
    }
    return 0;
}
