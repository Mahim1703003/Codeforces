#include<iostream>
using namespace std;

int main()
{
    int n,i,x,ma=0,k=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x>ma)
            ma = x;
        if(ma==i)
            k++;
    }
    cout<<k<<endl;
    return 0;
}
