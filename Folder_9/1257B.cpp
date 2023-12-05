#include<iostream>
using namespace std;
int main()
{
    int a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>=b)
            cout<<"YES\n";
        else
        {
            if(a==1||a==3)
                cout<<"NO\n";
            else if(a==2)
            {
                if(b==3)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
            else
                cout<<"YES\n";
        }
    }
    return 0;
}
