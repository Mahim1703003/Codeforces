#include<iostream>
using namespace std;
int main()
{
    int n,i,k=1;
    cin>>n;
    for(i=1;i<=n-1;i++)
    {
        k = (k+i)%n;
        if(k==0)
            k = n;
        cout<<k<<" ";
    }
    cout<<endl;
    return 0;
}
