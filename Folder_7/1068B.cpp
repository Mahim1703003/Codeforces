#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long int n,m,i,k=0;
    cin>>n;
    m = sqrt(n);
    for(i=1;i<=m;i++)
    {
        if(n%i==0)
            k = k + 2;
    }
    if(m*m==n)
        k--;
    cout<<k<<endl;
    return 0;
}
