#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,m,i,sum=0;
    cin>>n>>m;
    if(2*m>n)
        cout<<"0 ";
    else
        cout<<n-2*m<<" ";
    for(i=0;i<=n-1;i++)
    {
        sum = sum + i;
        if(sum>=m)
            break;
    }
    if(i==0)
        cout<<n-i<<"\n";
    else
        cout<<n-i-1<<"\n";
    return 0;
}
