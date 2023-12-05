#include<iostream>
using namespace std;
int main()
{
    int n,t,i,k=0;
    cin>>n>>t;
    int a[n];
    for(i=1;i<=n-1;i++)
        cin>>a[i];
    i = 1;
    while(i<=t)
    {
        i = i + a[i];
        if(i==t)
        {
            k++;
            cout<<"YES\n";
            break;
        }
    }
    if(k==0)
        cout<<"NO\n";

    return 0;
}
