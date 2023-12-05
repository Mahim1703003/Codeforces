#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
            cin>>a[i];
        if(a[0]+a[1]<=a[n-1])
            cout<<"1 2 "<<n<<"\n";
        else
            cout<<"-1\n";
    }
    return 0;
}

