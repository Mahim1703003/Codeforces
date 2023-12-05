#include<iostream>
using namespace std;
int main()
{
    int n,i,max;
    cin>>n;
    int b[n],a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>b[i];
        if(i==0)
        {
            a[i] = b[i];
            max = a[i];
        }
        else
        {
            a[i] = max + b[i];
            if(a[i]>max)
                max = a[i];
        }
    }
    for(i=0;i<=n-1;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
