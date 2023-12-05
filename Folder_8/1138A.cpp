#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    int n,i,ct=0,ans;
    cin>>n;
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(i==0)
            ct++;
        else
        {
            if(a[i]==a[i-1])
                ct++;
            else
            {
                v.push_back(ct);
                ct=1;
            }
        }
    }
    v.push_back(ct);
    for(i=0;i<=v.size()-2;i++)
    {
        if(i==0)
            ans = min(v[i],v[i+1]);
        else if(min(v[i],v[i+1])>ans)
            ans = min(v[i],v[i+1]);
    }
    cout<<ans*2<<endl;
    return 0;
}
