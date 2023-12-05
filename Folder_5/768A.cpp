#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,k=0,l=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    sort(a,a+n);
    if(a[0]==a[n-1])
        cout<<"0\n";
    else{
    for(i=0;i<=n-1;i++)
    {
        if(a[i]==a[0])
            k++;
        else
            break;
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==a[n-1])
            l++;
        else
            break;
    }
    cout<<n-k-l<<endl;
    }
    return 0;
}
