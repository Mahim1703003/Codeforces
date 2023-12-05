#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
            cout<<n<<"\n";
        else
        {
            if(n%2==0)
                n++;
            d = n/2;
            cout<<n-d<<"\n";
        }
    }
    return 0;
}
