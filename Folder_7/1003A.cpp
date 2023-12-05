#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k=1,m=1;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=n-1;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[i]==a[j])
                k++;
        }
        if(k>m)
            m=k;
        k=1;
    }
    cout<<m<<endl;
    return 0;
}
