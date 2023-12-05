#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j,k=1,m=0,l=0;
    long long int sum=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=1;i<=n-1;i++)
    {
        sum=sum+a[m];
        if(sum<=a[i])
        {
            k++;
            if(l==0)
                m++;
            else
            {
                m=i;
                l=0;
            }
        }
        else
        {
            l++;
            sum=sum-a[m];
        }
    }
    cout<<k<<endl;
    return 0;
}
