#include<iostream>
using namespace std;
int main()
{
    int n,m,x;
    cin>>n>>m;
    if(n==1&&m==1)
        x=1;
    else if(n-m>m-1)
        x=m+1;
    else if(m-1>=n-m)
        x=m-1;
    cout<<x<<endl;
    return 0;
}
