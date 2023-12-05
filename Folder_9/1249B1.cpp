#include<iostream>
using namespace std;
int main()
{
    int q,n,i,j,k,ct=0;
    cin>>q;
    for(j=1;j<=q;j++)
    {
        cin>>n;
        int a[n+1],b[n+1];
        for(i=1;i<=n;i++)
            cin>>a[i];
        for(i=1;i<=n;i++)
        {
            k = i;
            while(i!=a[k])
            {
                k = a[k];
                ct++;
            }
            b[i] = ct + 1;
            ct = 0;
        }
        for(i=1;i<=n;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
    return 0;
}
