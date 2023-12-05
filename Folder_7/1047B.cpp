#include<iostream>
using namespace std;
int main()
{
    int n,i,x,y;
    long long int k=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        if(x+y>k)
            k=x+y;
    }
    cout<<k<<endl;
    return 0;
}
