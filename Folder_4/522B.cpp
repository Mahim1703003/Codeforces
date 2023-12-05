#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <int,int> m;
    vector <int> v;
    int n,sum=0,i,W,H;
    cin>>n;
    int w[n],h[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>w[i]>>h[i];
        m[h[i]]++;
        v.push_back(h[i]);
        sum = sum + w[i];
    }
    sort(v.begin(),v.end(),greater<int>());
    for(i=0;i<=n-1;i++)
    {
        W = sum - w[i];
        if(h[i]!=v[0])
            H = v[0];
        else
        {
            if(m[v[0]]>1)
                H = v[0];
            else
                H = v[1];
        }
        cout<<W*H<<" ";
    }
    cout<<"\n";
    return 0;
}
