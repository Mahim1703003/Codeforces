#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v;
    int n,B,i,even=0,odd=0,sum=0;
    cin>>n>>B;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(i=0;i<=n-1;i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;
        if(even==odd&&i!=n-1)
            v.push_back(abs(a[i]-a[i+1]));
    }
    if(v.size()==0)
        cout<<"0\n";
    else
    {
        sort(v.begin(),v.end());
        for(i=0;i<=v.size()-1;i++)
        {
            sum = sum + v[i];
            if(sum>B)
                break;
        }
        cout<<i<<"\n";
    }
    return 0;
}
