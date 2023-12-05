#include<iostream>
using namespace std;
int main()
{
    int n,i,max=-1,maxin,ct1=0,ct2=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        {
            max = a[i];
            maxin = i;
        }
    }
    for(i=maxin+1;i<=n-2;i++)
    {
        if(a[i]<a[i+1])
        {
            ct1++;
            break;
        }
    }
    for(i=maxin-1;i>=1;i--)
    {
        if(a[i]<a[i-1])
        {
            ct2++;
            break;
        }
    }
    if(ct1==0 && ct2==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;

}
