#include<iostream>
using namespace std;
int main()
{
    int n,a,b,i;
    cin>>n>>a>>b;
    for(i=1;i<=n;i++)
    {
        if((i-1)>=a && (n-i)<=b)
            break;
    }
    cout<<n-i+1<<endl;
    return 0;
}
