#include<iostream>
using namespace std;

int main()
{
    int n,i,j,m,k=0,l=0;
    cin>>n;
    int a[n+1];
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
    {
        j = i;
        for(m=1;m<=3;m++)
        {
            if(j==a[j])
                l++;
            else
                j = a[j];
        }
        if(l!=0)
        {
            l=0;
            continue;
        }
        if(j==i)
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
