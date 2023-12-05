#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,j,k,ct=0,max=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=n-1;i++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(a[j]<=a[j+1])
                ct++;
            else
                break;
        }
        for(k=i+1;k<=n-1;k++)
        {
            if(a[k]<=a[k-1])
                ct++;
            else
                break;
        }
        if(ct>max)
            max = ct;
        ct = 0;
    }
    cout<<max+1<<"\n";
    return 0;
}
