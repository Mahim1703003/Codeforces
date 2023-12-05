#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int d,n,i,x,sum=0;
    cin>>d>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(i!=n)
            sum = sum + (d-x);
    }
    cout<<sum<<"\n";
    return 0;
}
