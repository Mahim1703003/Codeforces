#include<iostream>
using namespace std;
int main()
{
    int n,i,e1=0,d=0;
    cin>>n;
    int a[n+1];
    a[0]=0;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=0;i<=n-1;i++)
    {
        e1=e1+(a[i]-a[i+1]);
        if(e1<0)
        {
            d=d+(-1*e1);
            e1=0;
        }
    }
    cout<<d<<endl;
    return 0;
}
