#include<iostream>
using namespace std;
int main()
{
    int n,m,i,a,b;
    long long int sum=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        a=i/5;
        b=(m+i)/5;
        sum=sum+(b-a);
    }
    cout<<sum<<endl;
    return 0;
}
