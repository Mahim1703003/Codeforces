#include<iostream>
using namespace std;
int main()
{
    int l,r,a;
    cin>>l>>r>>a;
    if(l<r)
    {
        if(l+a<=r)
            cout<<(l+a)*2<<endl;
        else
        {
            a = a - (r-l);
            a = a / 2;
            cout<<(r+a)*2<<endl;
        }
    }
    else if(r<l)
    {
        if(r+a<=l)
            cout<<(r+a)*2<<endl;
        else
        {
            a = a - (l-r);
            a = a / 2;
            cout<<(l+a)*2<<endl;
        }
    }
    else
    {
        a = a / 2;
        cout<<(l+a)*2<<endl;
    }
    return 0;
}
