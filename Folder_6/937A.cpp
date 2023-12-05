#include<iostream>
using namespace std;
int main()
{
    int n,k=0,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=n-1;i++)
    {
        if(a[i]==-1||a[i]==0)
            continue;
        k++;
        for(j=i+1;j<=n-1;j++)
        {
            if(a[j]==a[i])
                a[j]=-1;
        }
    }
    cout<<k<<endl;
    return 0;
}
