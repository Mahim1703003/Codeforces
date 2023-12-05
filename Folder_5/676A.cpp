#include<iostream>
using namespace std;
int main()
{
    int n,i,b,c,ma,mi;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            b=i+1;
        else if(a[i]==n)
            c=i+1;
    }
    ma=(b>c)?b:c;
    mi=(b<c)?b:c;
    if(ma==n&&mi==1)
        cout<<ma-mi<<endl;
    else if((mi-1)>(n-ma))
        cout<<ma-1<<endl;
    else if((n-ma)>(mi-1))
        cout<<n-mi<<endl;
    else
        cout<<(ma-mi)+(n-ma)<<endl;
    return 0;
}
