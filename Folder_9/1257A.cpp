#include<iostream>
using namespace std;
int main()
{
    int t,n,x,a,b,p,q;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>a>>b;
        p = (a<b)?a:b;
        q = (a>b)?a:b;
        if((p-1)+(n-q)<=x)
            cout<<(q-p)+((p-1)+(n-q))<<endl;
        else
            cout<<(q-p)+x<<endl;
    }
    return 0;
}
