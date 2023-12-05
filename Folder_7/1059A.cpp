#include<iostream>
using namespace std;
int main()
{
    int n,L,a,d,sum=0,i;
    cin>>n>>L>>a;
    if(n==0)
        cout<<L/a<<endl;
    else
    {
        int arrive[n],stay[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>arrive[i]>>stay[i];
            if(i==0)
            {
                d = arrive[i];
                sum = sum + d/a;
            }
            else
            {
                d = arrive[i] - (arrive[i-1]+stay[i-1]);
                sum = sum + d/a;
            }
        }
        d = L - (arrive[n-1]+stay[n-1]);
        sum = sum + d/a;
        cout<<sum<<endl;
    }
    return 0;
}
