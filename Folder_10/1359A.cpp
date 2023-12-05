#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,m,k,div;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        if(m<=n/k)
            cout<<m<<"\n";
        else
        {
            m = m - n/k;
            div = m / (k-1);
            if(m % (k-1)!=0)
                div++;
            cout<<n/k - div<<"\n";
        }
    }
    return 0;
}
