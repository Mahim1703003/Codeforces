#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int t,n,k,div,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        div = k / (n-1);
        if(k % (n-1)==0)
            div--;
        if(k % (n-1)!=0)
            ans = n*div + (k % (n-1));
        else
            ans = n*div + (n-1);
        cout<<ans<<"\n";
    }
    return 0;
}
