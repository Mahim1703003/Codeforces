#include<iostream>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,k,i,d,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=1;;i++)
        {
            c = (i*(i+1)) / 2;
            if(k<c)
                break;
        }
        i--;
        d = k - (i*(i+1))/2;
        if(d==0)
        {
            a = n - i;
            b = a + 1;
        }
        else
        {
            d--;
            a = n - i - 1;
            b = n - d;
        }
        for(i=1;i<=n;i++)
        {
            if(i==a||i==b)
                cout<<"b";
            else
                cout<<"a";
        }
        cout<<"\n";
    }
    return 0;
}
