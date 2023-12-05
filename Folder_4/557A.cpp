#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,a[3],b[3],i;
    cin>>n;
    for(i=0;i<=2;i++)
        cin>>a[i]>>b[i];
    while(a[0]+a[1]+a[2]!=n)
    {
        if(a[0]+1<=b[0])
            a[0]++;
        else
            break;
    }
    while(a[0]+a[1]+a[2]!=n)
    {
        if(a[1]+1<=b[1])
            a[1]++;
        else
            break;
    }
    while(a[0]+a[1]+a[2]!=n)
    {
        if(a[2]+1<=b[2])
            a[2]++;
        else
            break;
    }
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<"\n";
    return 0;
}
