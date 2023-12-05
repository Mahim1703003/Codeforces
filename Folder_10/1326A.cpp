#include<iostream>
using namespace std;
int main()
{
    int t,n,a=5,b=3;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
            cout<<-1<<endl;
        else
        {
            cout<<a;
            n--;
            while(n--)
                cout<<b;
            cout<<endl;
        }
    }
    return 0;
}
