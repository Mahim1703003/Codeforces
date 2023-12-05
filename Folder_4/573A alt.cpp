#include<iostream>
using namespace std;
int main()
{
    int n,i,temp,big,div,k=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=1;i<=n-1;i++)
    {
        if(a[i]>a[0])
        {
            temp=a[0];
            a[0]=a[i];
            a[i]=temp;
        }
    }
    big=a[0];
    for(i=0;i<=n-1;i++)
    {
        if(big%a[i]==0)
        {
            div=big/a[i];
            if(div%2==0||div%3==0||div==1||div%5==0||div%7==0||div%11==0||div%13==0||div%17==0||div%19==0)
                k++;
        }
    }
    if(k==n)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
