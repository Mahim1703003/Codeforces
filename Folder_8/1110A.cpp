#include<iostream>
using namespace std;
int main()
{
    int b,k,i,even=0,odd=0;
    cin>>b>>k;
    int a[k];
    for(i=0;i<=k-1;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    if(b%2==1)
    {
        if(odd%2==0)
            cout<<"even\n";
        else
            cout<<"odd\n";
    }
    else
    {
        if(a[k-1]%2==0)
            cout<<"even\n";
        else
            cout<<"odd\n";
    }
    return 0;
}
