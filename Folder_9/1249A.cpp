#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main()
{
    int q,n,i,j,k=0;
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>n;
        int a[n];
        for(j=0;j<=n-1;j++)
            cin>>a[j];
        sort(a,a+n);
        for(j=0;j<=n-2;j++)
        {
            if(abs(a[j]-a[j+1])==1)
                k++;
        }
        if(k!=0)
            cout<<"2\n";
        else
            cout<<"1\n";
        k=0;
    }
    return 0;
}
