#include<iostream>
using namespace std;
int main()
{
    int n,i,k=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=n-1;i++)
    {
        if(a[i]==1)
        {
            if(i==n-1)
                break;
            if(a[i+1]==1)
            {
                k++;
                a[i+1]=0;
                i++;
            }
        }
        else if(a[i]==2)
        {
            if(i==n-1)
                break;
            if(a[i+1]==2)
            {
                k++;
                a[i+1]=0;
                i++;
            }
        }
        else if(a[i]==3)
        {
            if(i==n-1)
                break;
            if(a[i-1]==1&&a[i+1]==2)
                k++;
            else if(a[i-1]==2&&a[i+1]==1)
                k++;
        }
        else
            k++;
    cout<<k<<endl;
    }
    return 0;
}
