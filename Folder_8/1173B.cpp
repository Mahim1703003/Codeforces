#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k=1;
    cin>>n;
    for(i=1;i>=1;i++)
    {
        if(n<=(2*i-1))
            break;
    }
    cout<<i<<endl;
    for(j=1;j<=n;j++)
    {
        if(j<=i)
            cout<<k<<" "<<j<<endl;
        else
        {
            k++;
            cout<<k<<" "<<i<<endl;
        }
    }
    return 0;
}
