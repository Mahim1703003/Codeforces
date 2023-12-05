#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,i,j,k=0,l=0,max;
    cin>>n;
    long long int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    max = a[0] - a[n-1];
    if(max!=0)
    {
        for(i=0;i<=n-1;i++)
        {
            if(a[0]==a[i])
                k++;
            else
                break;
        }
        for(i=n-1;i>=0;i--)
        {
            if(a[n-1]==a[i])
                l++;
            else
                break;
        }
        cout<<max<<" "<<k*l<<endl;
    }
    else
        cout<<max<<" "<<(n*(n-1))/2<<endl;

    return 0;
}
