#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j,k=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<=n-1;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[i]==a[j])
            {
                k++;
                a[j]++;
            }
        }
    }
    cout<<k<<endl;
    return 0;
}
