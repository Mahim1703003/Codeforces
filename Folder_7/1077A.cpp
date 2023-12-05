#include<iostream>
using namespace std;
int main()
{
    long long int t,a,b,k,i,m;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>k;
        m=k/2;
        if(k%2!=0)
            m++;
        cout<<(m*a)-(k-m)*b<<endl;
    }
    return 0;
}
