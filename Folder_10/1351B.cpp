#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,a1,b1,a2,b2,k=0;
    cin>>t;
    while(t--)
    {
        cin>>a1>>b1>>a2>>b2;
        if(a1==a2)
        {
            if(b1+b2==a1)
                k++;
        }
        if(a1==b2)
        {
            if(b1+a2==a1)
                k++;
        }
        if(b1==a2)
        {
            if(a1+b2==b1)
                k++;
        }
        if(b1==b2)
        {
            if(a1+a2==b1)
                k++;
        }
        if(k!=0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        k = 0;
    }
    return 0;
}
