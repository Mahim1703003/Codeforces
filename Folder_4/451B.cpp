#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,i,j,k,ct=0;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
    sort(a,a+n);
    for(i=0;i<=n-1;i++)
    {
        if(a[i]!=b[i])
        {
            ct++;
            break;
        }
    }
    if(ct==0)
        cout<<"yes\n1 1\n";
    else
    {
        for(j=n-1;j>=0;j--)
        {
            if(b[j]==a[i])
                break;
        }
        reverse(b+i,b+j+1);
        ct = 0;
        for(k=0;k<=n-1;k++)
        {
            if(a[k]==b[k])
                ct++;
            else
                break;
        }
        if(ct==n)
            cout<<"yes\n"<<i+1<<" "<<j+1<<"\n";
        else
            cout<<"no\n";
    }
    return 0;
}
