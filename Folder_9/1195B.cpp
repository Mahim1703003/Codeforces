#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,k,i,sum=0;
    cin>>n>>k;
    for(i=1;;i++)
    {
        sum = sum + i;
        if(sum-(n-i)==k)
            break;
    }
    cout<<n-i<<"\n";
    return 0;
}
