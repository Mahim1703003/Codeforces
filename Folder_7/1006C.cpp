#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,i,j,sum1=0,sum2=0,max_sum;
    cin>>n;
    long long int a[n+1];
    for(i=1;i<=n;i++)
        cin>>a[i];
    i = 0;
    j = n+1;
    while(1)
    {
        if(sum1==sum2)
        {
            max_sum = sum1;
            i++;
            j--;
            if(i<j)
            {
                sum1 = sum1 + a[i];
                sum2 = sum2 + a[j];
            }
            else
                break;
        }
        else if(sum1>sum2)
        {
            j--;
            if(i<j)
                sum2 = sum2 + a[j];
            else
                break;
        }
        else
        {
            i++;
            if(i<j)
                sum1 = sum1 + a[i];
            else
                break;
        }
    }
    cout<<max_sum<<"\n";
    return 0;
}
