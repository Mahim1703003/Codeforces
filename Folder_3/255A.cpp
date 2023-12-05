#include<iostream>
using namespace std;
int main()
{
    int n,i,k=0,l=0,m=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if((i+1)%3==1)
            k=k+a[i];
        else if((i+1)%3==2)
            l=l+a[i];
        else
            m=m+a[i];
    }
    if(k>l&&k>m)
        cout<<"chest\n";
    else if(l>k&&l>m)
        cout<<"biceps\n";
    else
        cout<<"back\n";
    return 0;
}
