#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,m,i,k=0,sum = 0;
    cin>>n>>m;
    long long int a[n],b[n],c[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i]>>b[i];
        sum = sum + a[i];
        c[i] = a[i] - b[i];
    }
    if(sum<=m)
        cout<<"0\n";
    else
    {
        sort(c,c+n,greater<int>());
        for(i=0;i<=n-1;i++)
        {
            sum = sum - c[i];
            if(sum<=m)
            {
                k++;
                break;
            }
        }
        if(k!=0)
            cout<<i+1<<"\n";
        else
            cout<<"-1\n";
    }
    return 0;
}
