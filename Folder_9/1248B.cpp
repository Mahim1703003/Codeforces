#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j;
    long long int x=0,y=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    i=0;
    j=n-1;
    while(i<j)
    {
        x = x + a[j];
        y = y + a[i];
        j--;
        i++;
    }
    if(i==j)
        x = x + a[j];
    cout<<x*x+y*y<<endl;
    return 0;
}
