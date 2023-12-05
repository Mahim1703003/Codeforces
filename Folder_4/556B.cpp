#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,j,steps=0,k=0;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    if(a[0]!=0)
        steps = n - a[0];
    for(i=1;i<=n-1;i++)
    {
        if(i%2==0)
        {
            for(j=1;j<=steps;j++)
                a[i] = (a[i]+1) % n;
        }
        else
        {
            for(j=1;j<=steps;j++)
            {
                if((a[i]-1)<0)
                    a[i] = n-1;
                else
                    a[i] = a[i] - 1;
            }
        }
        if(a[i]!=i)
        {
            k++;
            break;
        }
    }
    if(k==0)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
