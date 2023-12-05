#include<iostream>
using namespace std;
int main()
{
    int n,b,d,i,k=0;
    long long int sum=0;
    cin>>n>>b>>d;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(a[i]<=b)
            sum=sum+a[i];
        if(sum>d)
        {
            k++;
            sum=0;
        }
    }
    cout<<k<<endl;
    return 0;
}
