#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,i,min;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<=n-1;i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=0;i<=n-2;i++)
        {
            if(i==0)
                min = a[i+1] - a[i];
            else if((a[i+1] - a[i]) < min)
                min = a[i+1] - a[i];
        }
        cout<<min<<"\n";
    }
    return 0;
}
