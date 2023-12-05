#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k=1,l;
    cin>>n;
    l=n*n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=n/2)
            {
                cout<<k<<" ";
                k++;
            }
            else
            {
                cout<<l<<" ";
                l--;
            }
        }
        cout<<endl;
    }
    return 0;
}
