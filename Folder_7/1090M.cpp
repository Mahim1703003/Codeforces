#include<iostream>
using namespace std;
int main()
{
    int n,m,i,k=1,ma=0;
    cin>>n>>m;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=n-2;i++)
    {
        if(a[i]!=a[i+1])
            k++;
        else
        {
            if(k>ma)
                ma=k;
            k=1;
        }
    }
    if(k>ma)
        ma=k;
    cout<<ma<<endl;
    return 0;
}
