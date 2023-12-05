#include<iostream>
using namespace std;
int main()
{
    int n,i,j,m,k;
    cin>>n;
    m=n/2;
    k=m;
    for(i=1;i<=n;i++)
    {
        if(i<=m)
        {
            for(j=1;j<=k;j++)
                cout<<"*";
            for(j=1;j<=2*i-1;j++)
                cout<<"D";
            for(j=1;j<=k;j++)
                cout<<"*";
            cout<<endl;
            k--;
        }
        else if(i==m+1)
        {
            for(j=1;j<=n;j++)
                cout<<"D";
            cout<<endl;
        }
        else
        {
            k++;
            for(j=1;j<=k;j++)
                cout<<"*";
            for(j=1;j<=n-2*k;j++)
                cout<<"D";
            for(j=1;j<=k;j++)
                cout<<"*";
            cout<<endl;
        }
    }
    return 0;
}
