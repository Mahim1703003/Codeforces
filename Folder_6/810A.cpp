#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int i;
    double n,k,x,sum=0,avg;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        sum = sum + x;
    }
    avg = sum / n;
    if(avg>=k-0.5)
        cout<<"0\n";
    else
        cout<<(n*k-0.5*n-sum)/0.5<<"\n";
    return 0;
}
