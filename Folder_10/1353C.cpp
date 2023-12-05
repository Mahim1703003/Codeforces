#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,i,sum=0,ct=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;;i++)
        {
            sum = sum + (ct * i);
            ct = ct + 8;
            if(2*i+1==n)
                break;
        }
        cout<<sum<<"\n";
        sum = 0;
        ct = 0;
    }
    return 0;
}
