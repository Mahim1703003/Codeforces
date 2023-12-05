#include<iostream>
using namespace std;
int main()
{
    long long int a,b,n,s,q,i,div;
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>a>>b>>n>>s;
        div = s / n;
        if(div<=a)
        {
            if(b>=(s-(div*n)))
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
        {
            if(b>=(s-(a*n)))
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}
