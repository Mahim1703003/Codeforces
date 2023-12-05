#include<iostream>
using namespace std;
int main()
{
    int n,k,i,sum=0,min,min_index;
    cin>>n>>k;
    int a[n+1];
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
    {
        if(i<=k)
        {
            sum = sum + a[i];
            if(i==k)
            {
                min = sum;
                min_index = i - k + 1;
            }
        }
        else
        {
            sum = sum - a[i-k];
            sum = sum + a[i];
            if(sum<min)
            {
                min = sum;
                min_index = i - k + 1;
            }
        }
    }
    cout<<min_index<<endl;
    return 0;
}
