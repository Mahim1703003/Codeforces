#include<iostream>
using namespace std;
int main()
{
    int t,i,l,r;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>l>>r;
        if(2*l<=r)
            cout<<l<<" "<<2*l<<endl;
        else
            cout<<2*l<<" "<<l<<endl;
    }
    return 0;
}
