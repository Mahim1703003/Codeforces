#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,x,a[2]={0};
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<=n-1;i++)
        {
            cin>>x;
            if(i%2!=x%2)
                a[x%2]++;
        }
        if(a[0]==a[1])
            cout<<a[0]<<"\n";
        else
            cout<<"-1\n";
        a[0] = 0;
        a[1] = 0;
    }
    return 0;
}
