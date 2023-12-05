#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,p;
    cin>>n>>p;
    if(p==0)
    {
        if(n%3==0&&n%2==0 || n%3==2&&n%2==1)
            cout<<"0\n";
        else if(n%3==1&&n%2==1 || n%3==2&&n%2==0)
            cout<<"1\n";
        else if(n%3==1&&n%2==0 || n%3==0&&n%2==1)
            cout<<"2\n";
    }
    else if(p==1)
    {
        if(n%3==1)
            cout<<"0\n";
        else if(n%3==0)
            cout<<"1\n";
        else if(n%3==2)
            cout<<"2\n";
    }
    else if(p==2)
    {
        if(n%3==0&&n%2==1 || n%3==2&&n%2==0)
            cout<<"0\n";
        else if(n%3==1&&n%2==0 || n%3==2&&n%2==1)
            cout<<"1\n";
        else if(n%3==1&&n%2==1 || n%3==0&&n%2==0)
            cout<<"2\n";
    }
    return 0;
}
