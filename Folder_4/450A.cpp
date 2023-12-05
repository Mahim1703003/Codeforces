#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,l,k=0;
    cin>>n>>m;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    if(n==1)
        cout<<"1"<<endl;
    else{
    for(l=0;l>=0;l++)
    {
        for(i=0;i<=n-1;i++)
        {
            a[i]=a[i]-m;
            for(j=0;j<=n-1;j++)
            {
                if(a[j]>0)
                    k++;
            }
            if(k==1)
                break;
            else
                k=0;
        }
        if(k==1)
            break;
    }
    for(i=0;i<=n-1;i++)
    {
        if(a[i]>0)
        {
            cout<<i+1<<endl;
            break;
        }
    }
    }
    return 0;
}
