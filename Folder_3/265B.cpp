#include<iostream>
using namespace std;

int main()
{
    int i,n;
    long long int sum = 0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sum = sum + a[0];
    for(i=0;i<=n-2;i++)
    {
        sum++;
        if(a[i]>a[i+1])
            sum = sum + (a[i]-a[i+1]+1);
        else if(a[i]<a[i+1])
            sum = sum + 1 + (a[i+1]-a[i]);
        else
            sum++;
    }
    sum++;
    cout<<sum<<endl;
    return 0;
}
