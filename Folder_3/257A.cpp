#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,k,sum,i,mi,f=0;
    cin>>n>>m>>k;
    int a[n+1];
    for(i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1,greater<int>());
    if(k>=m)
        cout<<"0\n";
    else
    {
        sum = k;
        for(i=1;i<=n;i++)
        {
            sum = sum + a[i] - 1;
            if(sum>=m)
            {
                f++;
                break;
            }
        }
        if(f!=0)
            cout<<i<<"\n";
        else
            cout<<"-1\n";
    }
    return 0;
}
