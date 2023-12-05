#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector <int> v;
    int n,h,i,j,l,k,mdis=0,mpart=0;
    cin>>n>>h;
    int a[n];
    for(i=0;i<=n-1;i++)
        cin>>a[i];
    for(k=0;k<=n-1;k++)
    {
        v.push_back(a[k]);
        sort(v.begin(),v.end(),greater<int>());
        l = v.size();
        for(i=0;i<=l-1;i++)
        {
            if(mdis+v[i]<=h)
            {
                if(i%2==1)
                    mdis = mdis + v[i-1];
            }
            else
                break;
        }
        if(i==l)
            mpart = max(mpart,l);
        mdis = 0;
    }
    cout<<mpart<<"\n";
    return 0;
}
