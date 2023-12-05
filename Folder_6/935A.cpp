#include<iostream>
using namespace std;
int main()
{
    int n,i,m,k=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        m=n-i;
        if(i>m)
            break;
        if(m%i==0)
            k++;
    }
    cout<<k<<endl;
    return 0;
}
