#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,x,f=0;
    cin>>n>>m;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    int b[m];
    for(i=0;i<=m-1;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    for(i=a[n-1];i<b[0];i++)
    {
        if(i>=2*a[0])
        {
            cout<<i<<endl;
            f++;
            break;
        }
    }
    if(f==0)
        cout<<"-1\n";
    return 0;
}
