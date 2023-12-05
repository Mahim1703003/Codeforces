#include<iostream>
using namespace std;
int main()
{
    int n,k,i,x,f1=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    x = a[k-1];
    for(i=k-1;i<=n-1;i++)
    {
        if(a[i]!=x)
        {
            f1++;
            break;
        }
    }
    if(f1!=0)
        cout<<"-1\n";
    else
    {
        for(i=k-2;i>=0;i--)
        {
            if(a[i]!=x)
                break;
        }
        cout<<i+1<<endl;
    }

    return 0;
}
