#include<iostream>
using namespace std;
int main()
{
    int n,m,p,i,j,k=0;
    cin>>n>>m;
    for(i=n+1;i>=0;i++)
    {
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
            {
                k++;
                break;
            }
        }
        if(k==0)
        {
            p=i;
            break;
        }
        k=0;
    }
    if(p==m)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
