#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v;
    int t,n,i,l,k=0,min_number;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],b[n];
        for(i=0;i<=n-1;i++)
        {
            cin>>a[i];
            b[i] = a[i];
            if(i==0)
                min_number = a[i];
            else
                min_number = min(min_number,a[i]);
        }
        sort(b,b+n);
        for(i=0;i<=n-1;i++)
        {
            if(a[i]!=b[i])
                v.push_back(a[i]);
        }
        l = v.size();
        for(i=0;i<=l-1;i++)
        {
            if(v[i]==min_number)
                continue;
            if(__gcd(v[i],min_number)==min_number)
                continue;
            else
                k++;
        }
        if(k==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        v.clear();
        k = 0;
    }
    return 0;
}
