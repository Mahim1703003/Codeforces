#include<iostream>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a<b)
        {
            if(b%2==1 && a%2==0)
                cout<<"1\n";
            else if(b%2==1 && a%2==1)
                cout<<"2\n";
            else if(b%2==0 && a%2==1)
                cout<<"1\n";
            else if(b%2==0 && a%2==0)
                cout<<"2\n";
        }
        else if(b<a)
        {
            if(b%2==1 && a%2==0)
                cout<<"2\n";
            else if(b%2==1 && a%2==1)
                cout<<"1\n";
            else if(b%2==0 && a%2==1)
                cout<<"2\n";
            else if(b%2==0 && a%2==0)
                cout<<"1\n";
        }
        else
            cout<<"0\n";
    }
    return 0;
}
