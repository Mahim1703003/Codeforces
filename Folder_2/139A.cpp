#include<iostream>
using namespace std;
int main()
{
    int n,a[7],i,sum=0;
    cin>>n;
    for(i=0;i<=6;i++)
        cin>>a[i];
    for(i=0;;i=(i+1)%7)
    {
        sum = sum + a[i];
        if(sum>=n)
            break;
    }
    cout<<i+1<<endl;
    return 0;
}
