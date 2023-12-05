#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,d=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
            cout<<n/2<<" "<<n/2<<"\n";
        else
        {
            for(i=2;i<=sqrt(n);i++)
            {
                if(n%i==0)
                    d = max(d,max(i,n/i));
            }
            if(d==0)
                cout<<"1 "<<n-1<<"\n";
            else
                cout<<n-d<<" "<<d<<"\n";
        }
        d = 0;
    }
    return 0;
}
