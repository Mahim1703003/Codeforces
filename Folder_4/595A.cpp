#include<iostream>
using namespace std;
int main()
{
    int n,m,i,k=0;
    cin>>n>>m;
    int a[2*m+1];
    while(n--)
    {
        for(i=1;i<=2*m;i++)
        {
            cin>>a[i];
            if(i%2==0)
            {
                if(a[i]==1||a[i-1]==1)
                    k++;
            }
        }
    }
    cout<<k<<endl;
    return 0;
}
