#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,a,b,x,y,rem,sum=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        x = min(a,b);
        y = max(a,b);
        while(1)
        {
            sum = sum + y/x;
            rem = y % x;
            if(rem==0)
                break;
            y = x;
            x = rem;
        }
        cout<<sum<<"\n";
        sum = 0;
    }
}
