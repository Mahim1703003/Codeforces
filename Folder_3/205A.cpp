#include<iostream>
using namespace std;
int main()
{
    int n,min,i,in,k=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(i==0)
            min = a[i];
        else
        {
            if(a[i]<min)
                min = a[i];
        }
    }
    for(i=0;i<=n-1;i++)
    {
        if(min==a[i])
        {
            k++;
            in = i;
        }
    }
    if(k==1)
        cout<<in+1<<endl;
    else
        cout<<"Still Rozdil\n";
    return 0;
}
