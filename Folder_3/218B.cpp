#include<iostream>/// got wa eith this code
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,ct1=0,ct2=0,k=0,f=0,sum=0;
    cin>>n>>m;
    int a[m],b[m];
    for(i=0;i<=m-1;i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
    sort(a,a+m,greater<int>());
    sort(b,b+m,greater<int>());
    for(i=0;;i=(i+1)%m)
    {
        while(a[i]>=a[(i+1)%m] && a[i]!=0)
        {
            ct1++;
            sum = sum + a[i];
            a[i]--;
            if(a[i]==0)
                ct2++;
            if(ct1==n||ct2==m)
            {
                f++;
                break;
            }
        }
        if(f!=0)
            break;
    }
    cout<<sum<<" ";

    sum = 0;
    ct1 = 0;
    f = 0;
    for(i=m-1;i>=0;i--)
    {
        while(b[i])
        {
            ct1++;
            sum = sum + b[i];
            b[i]--;
            if(ct1==n)
            {
                f++;
                break;
            }
        }
        if(f!=0)
            break;
    }
    cout<<sum<<endl;
    return 0;
}
