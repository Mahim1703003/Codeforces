#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,d,i,number,left,right,mid,k,sum=0;
    cin>>n>>d;
    int a[n+1];
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
    {
        number = a[i] + d;
        left = 1;
        right = n;
        while(left<=right)
        {
            mid = (left + right) / 2;
            if(a[mid]<=number)
                left = mid + 1;
            else
                right = mid - 1;
        }
        k = right - i - 1;
        sum = sum + ((k*(k+1))/2);
    }
    cout<<sum<<"\n";
    return 0;
}
