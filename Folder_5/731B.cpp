#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,k=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=n-1;i++)
    {
        if(i==n-1)
        {
            if(a[i]%2==0)
                k++;
        }
        else
        {
            if(a[i]%2==0)
                a[i] = 0;
            else
            {
                a[i] = 0;
                if(a[i+1]-1>=0)
                    a[i+1] = a[i+1] - 1;
                else
                    break;
            }
        }
    }
    if(k!=0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
