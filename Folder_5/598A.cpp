#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long int t,n,i,j,sum,x;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        cin>>n;
        sum = (n*(n+1))/2;
        for(i=0;i>=0;i++)
        {
            x = pow(2,i);
            if(x<=n)
                sum = sum - 2*x;
            else
                break;
        }
        cout<<sum<<endl;
    }
    return 0;
}
