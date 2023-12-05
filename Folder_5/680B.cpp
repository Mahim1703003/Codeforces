#include<iostream>
using namespace std;
int main()
{
    int n,a,i,m,sum=0;
    cin>>n>>a;
    int b[n];
    for(i=0;i<=n-1;i++)
        cin>>b[i];
    m=(a-1>n-a)?a-1:n-a;
    for(i=1;i<=m;i++)
    {
        if(a-i>=1&&a+i<=n)
        {
            if(b[a-i-1]!=0&&b[a+i-1]!=0)
                sum=sum+b[a-i-1]+b[a+i-1];
        }
        else
        {
            if(a-i>=1)
                sum=sum+b[a-i-1];
            else if(a+i<=n)
                sum=sum+b[a+i-1];
        }
    }
    sum=sum+b[a-1];
    cout<<sum<<endl;
    return 0;
}
