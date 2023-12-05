#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,k,i,j,c,sum=0;
    cin>>n>>k;
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    for(i=0;i<=n-1;i++)
    {
        sum=sum+a[i];
        if(sum>k)
        {
            i--;
            c=i;
            break;
        }
        if(i==n-1)
        {
            c=i;
            break;
        }
    }
    cout<<c+1<<endl;
    for(i=0;i<=c;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            if(a[i]==b[j])
            {
                cout<<j+1<<" ";
                b[j]=-1;
                break;
            }
        }
    }
    return 0;
}
