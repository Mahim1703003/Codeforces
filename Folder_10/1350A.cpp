#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,k,i,ct=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n%2==1)
        {
            for(i=2;i<=sqrt(n);i++)
            {
                if(n%i==0)
                {
                    ct++;
                    break;
                }
            }
            if(ct!=0)
                n = n + i;
            else
                n = n + n;
            n = n + 2*(k-1);
        }
        else
            n = n + 2*k;
        cout<<n<<"\n";
        ct = 0;
    }
    return 0;
}
