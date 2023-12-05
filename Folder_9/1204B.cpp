#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,l,r,i,sum=0,k;
    cin>>n>>l>>r;

    k = 1;
    for(i=1;i<=n;i++)
    {
        if(i<=n-(l-1))
            sum = sum + k;
        else
        {
            k = k * 2;
            sum = sum + k;
        }
    }
    cout<<sum;
    sum = 0;

    k = pow(2,r-1);
    for(i=1;i<=n;i++)
    {
        if(i<=n-(r-1))
            sum = sum + k;
        else
        {
            k = k / 2;
            sum = sum + k;
        }
    }
    cout<<" "<<sum<<endl;
    return 0;
}
