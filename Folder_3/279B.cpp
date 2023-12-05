#include<iostream>

using namespace std;

int main()
{
    int n,t,sum=0,i,j,k=1,m=0,temp;
    cin>>n>>t;
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    if(n==1)
    {
        if(a[0]>t)
            cout<<"0\n";
        else
            cout<<"1\n";
    }
    else{
    for(i=0;i<=n-1;i++)
    {
        sum=a[i];
        for(j=i+1;j<=n-1;j++)
        {
            sum=sum+a[j];
            if(sum<=t)
                k++;
            else
                break;
        }
        b[m]=k;
        m++;
        k=1;
    }
    for(i=1;i<=m-1;i++)
    {
        if(b[i]>b[0])
        {
            temp=b[0];
            b[0]=b[i];
            b[i]=temp;
        }
    }
    cout<<b[0]<<endl;
    }
    return 0;
}
